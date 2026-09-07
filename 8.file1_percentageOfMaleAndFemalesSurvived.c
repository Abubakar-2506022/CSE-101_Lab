
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

  char coloum[1024];

  fscanf(f, " %1023[^\n]", coloum);

  int numberOfMales = 0;
  int numberOfFemales = 0;
  int numberOfMalesDied = 0;
  int numberOfFemalesDied = 0;

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

    if (strcmp(sex, "male") == 0)
    {
      numberOfMales++;
      if (!survive)
        numberOfMalesDied++;
    }

    if (strcmp(sex, "female") == 0)
    {
      numberOfFemales++;
      if (!survive)
        numberOfFemalesDied++;
    }
  }
  // printf("Total males : %d\n", numberOfMales);
  // printf("Total females : %d\n", numberOfFemales);

  printf("Males Survived : %lf\n", (100.0) * (numberOfMales - numberOfMalesDied) / (double)(numberOfMales));
  printf("Females Survived : %lf\n", (100.0) * (numberOfFemales - numberOfFemalesDied) / (double)(numberOfFemales));

  fclose(f);

  return 0;
}
