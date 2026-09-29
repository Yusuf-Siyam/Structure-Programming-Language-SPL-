#include <stdio.h>

struct Rider
{
    char name[50];
    int riderID;
    char zone[50];
    int deliveries[30];
    float totalHours;
    float efficiency;
};

int main()
{
    struct Rider r[100];
    int i, j, total;
    int best = -1;

    for (i = 0; i < 100; i++)
    {
        printf("Enter Rider Name: ");
        scanf("%s", r[i].name);

        printf("Enter Rider ID: ");
        scanf("%d", &r[i].riderID);

        printf("Enter Zone: ");
        scanf("%s", r[i].zone);

        total = 0;

        printf("Enter deliveries for 30 days:\n");

        for (j = 0; j < 30; j++)
        {
            scanf("%d", &r[i].deliveries[j]);
            total = total + r[i].deliveries[j];
        }

        printf("Enter Total Hours: ");
        scanf("%f", &r[i].totalHours);

        r[i].efficiency = (float)total / r[i].totalHours;

        if (total >= 200)
        {
            if (best == -1 || r[i].efficiency > r[best].efficiency)
            {
                best = i;
            }
        }
    }

    if (best != -1)
    {
        total = 0;

        for (j = 0; j < 30; j++)
        {
            total = total + r[best].deliveries[j];
        }

        printf("\nRider of the Month:\n");
        printf("Name = %s\n", r[best].name);
        printf("Rider ID = %d\n", r[best].riderID);
        printf("Zone = %s\n", r[best].zone);
        printf("Total Deliveries = %d\n", total);
        printf("Total Hours = %.2f\n", r[best].totalHours);
        printf("Efficiency = %.2f\n", r[best].efficiency);
    }
    else
    {
        printf("\nNo eligible rider found.\n");
    }

    return 0;
}

