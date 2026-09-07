
#include <stdio.h>
#include <string.h>

int resIDs[100];
char guestNames[100][100];
int roomNumbers[100];
char roomTypes[100][20];
char dates[100][11];
float rents[100];
int statuses[100];

int count = 0;

void addReservation()
{
    if (count >= 100)
    {
        printf("Database Full!\n");
        return;
    }

    printf("Enter ID: ");
    scanf("%d", &resIDs[count]);

    printf("Enter Guest Name: ");
    scanf(" %[^\n]", guestNames[count]);

    printf("Enter Room Number (1-10): ");
    scanf("%d", &roomNumbers[count]);

    printf("Enter Room Type: ");
    scanf("%s", roomTypes[count]);

    printf("Enter Date (DD/MM/YYYY): ");
    scanf("%s", dates[count]);

    printf("Enter Rent: ");
    scanf("%f", &rents[count]);

    printf("Enter Status (1-Occupied, 0-Vacant): ");
    scanf("%d", &statuses[count]);

    count++;
    printf("Reservation Added Successfully.\n");
}

void searchByID()
{
    int id, found = 0;

    printf("Enter ID to Search: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++)
    {
        if (resIDs[i] == id)
        {
            printf("\nGuest Name : %s\n", guestNames[i]);
            printf("Room Number : %d\n", roomNumbers[i]);
            printf("Room Type : %s\n", roomTypes[i]);
            printf("Date : %s\n", dates[i]);
            printf("Rent : %.2f\n", rents[i]);
            printf("Status : %d\n", statuses[i]);

            found = 1;
            break;
        }
    }

    if (!found)
        printf("Reservation Not Found.\n");
}

void displayByDate()
{
    char d[11];
    int found = 0;

    printf("Enter Date (DD/MM/YYYY): ");
    scanf("%10s", d);

    for (int i = 0; i < count; i++)
    {
        if (strcmp(dates[i], d) == 0)
        {
            printf("Guest: %s\n", guestNames[i]);
            printf("Room: %d\n\n", roomNumbers[i]);
            found = 1;
        }
    }

    if (!found)
        printf("No Reservation Found.\n");
}

void displayVacantRooms()
{
    int tempRooms[11] = {0};

    for (int i = 0; i < count; i++)
    {
        if (statuses[i] == 1)
        {
            tempRooms[roomNumbers[i]] = 1;
        }
    }

    printf("Vacant Rooms: ");

    for (int i = 1; i <= 10; i++)
    {
        if (tempRooms[i] == 0)
            printf("%d ", i);
    }

    printf("\n");
}

void calculateYearlyRevenue()
{
    char year[5];
    float total = 0;

    printf("Enter Year (YYYY): ");
    scanf("%4s", year);

    for (int i = 0; i < count; i++)
    {
        if (strcmp(dates[i] + 6, year) == 0)
        {
            total += rents[i];
        }
    }

    printf("Total Revenue for %s : %.2f\n", year, total);
}

int main()
{
    int choice;

    while (1)
    {
        printf("\n===== HOTEL RESERVATION SYSTEM =====\n");
        printf("1. Add Reservation\n");
        printf("2. Search by ID\n");
        printf("3. Display by Date\n");
        printf("4. Display Vacant Rooms\n");
        printf("5. Calculate Yearly Revenue\n");
        printf("6. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        if (choice == 1)
            addReservation();
        else if (choice == 2)
            searchByID();
        else if (choice == 3)
            displayByDate();
        else if (choice == 4)
            displayVacantRooms();
        else if (choice == 5)
            calculateYearlyRevenue();
        else if (choice == 6)
            break;
        else
            printf("Invalid Choice!\n");
    }

    return 0;
}
