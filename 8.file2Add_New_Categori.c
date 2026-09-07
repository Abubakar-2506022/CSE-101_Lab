
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isValid(int passengerID, int survive, int pgClass, char *sex, int age)
{
  if (passengerID < 0 || survive < 0 | pgClass < 0 || age < 0)
    return 0;

  if (!(strcmp(sex, "male") == 0 || strcmp(sex, "female") == 0))
    return 0;

  return 1;
}

int main()
{

  FILE *f = fopen("titanic.csv", "r");
  FILE *outputFile = fopen("titanic_output.csv", "w");

  char coloum[1024];

  fscanf(f, " %1023[^\n]", coloum);
  fprintf(outputFile, "%s,age_category\n", coloum);

  for (int i = 0; i < 891; i++)
  {
    char str[1024];
    fscanf(f, " %1023[^\n]", str);

    int passengerID = -1;
    int survive = -1;
    int pgClass = -1;
    char name[512];
    char sex[64];
    int age = -1;
    sscanf(str, "%d,%d,%d,\"%500[^\"]\",%60[^,],%d,", &passengerID, &survive, &pgClass, name, sex, &age);
    // printf("%s\n", str);
    // printf("%d | %d | %d | %s | %s | %d\n", passengerID, survive, pgClass, name, sex, age);
    if (!isValid(passengerID, survive, pgClass, sex, age))
      continue;

    if (age > 0 && age <= 18)
    {
      fprintf(outputFile, "%s,%d\n", str,1);
      continue;
    }

    if (age > 18 && age <= 40)
    {
      fprintf(outputFile, "%s,%d\n", str, 2);
      continue;
    }

    if (age > 40)
    {
      fprintf(outputFile, "%s,%d\n", str, 3);
      continue;
    }
  }
  // printf("Total males : %d\n", numberOfMales);
  // printf("Total females : %d\n", numberOfFemales);

  fclose(f);
  fclose(outputFile);
  return 0;
}
