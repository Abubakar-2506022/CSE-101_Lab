


#include <stdio.h>
#include <stdint.h>

#pragma pack(push, 1)

typedef struct
{
  uint16_t type; // 0x4d42 ('B' 'M')
  uint32_t size; // file size
  uint16_t res1;
  uint16_t res2;
  uint32_t offBits;
} BMPFileHeader;

typedef struct
{
  uint32_t size;
  int32_t width;
  int32_t height;
  uint16_t planes;
  uint16_t bitsPerPixel; // 24
  char xyz[24];

} BMPInfoHeader;

typedef struct
{
  uint8_t b;
  uint8_t g;
  uint8_t r;
} BMPPixel;
#pragma pack(pop)

int main()
{
  BMPFileHeader fileheader;
  BMPInfoHeader infoHeader;

  FILE *img = fopen("lena.bmp", "rb");
  FILE *output = fopen("output.bmp", "wb");

  if (img == NULL || output == NULL)
  {
    printf("Couldn't Open image or write the output\n");
    return 0;
  }

  fread(&fileheader, sizeof(BMPFileHeader), 1, img);
  fread(&infoHeader, sizeof(BMPInfoHeader), 1, img);

  if (fileheader.type == 0x4d42)
  {
    printf("BMP file\n");

    if (infoHeader.bitsPerPixel != 24)
    {
      printf("This is an invalid file\n");
      return 0;
    }

    printf("Width : %d\n", infoHeader.width);
    printf("height: %d\n", infoHeader.height);

    fseek(img, fileheader.offBits, SEEK_SET);
    fwrite(&fileheader, sizeof(BMPFileHeader), 1, output);
    fwrite(&infoHeader, sizeof(BMPInfoHeader), 1, output);
    fseek(output, fileheader.offBits, SEEK_SET);

    for (int i = 0; i < infoHeader.width * infoHeader.height; i++)
    {

      BMPPixel pixel;
      fread(&pixel, sizeof(pixel), 1, img);

      uint8_t gray = 0.299 * pixel.r + 0.587 * pixel.g + 0.114 * pixel.b;
      pixel.r = gray;
      pixel.g = gray;
      pixel.b = gray;

      fwrite(&pixel, sizeof(BMPPixel), 1, output);
    }
  }
  else
  {
    printf("Not a bmp file\n");
    return 0;
  }

  fclose(img);
  fclose(output);

  return 0;
}
