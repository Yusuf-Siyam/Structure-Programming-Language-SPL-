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

    int i, j;
    int total;
    int best = -1;

    // Input for 100 riders
    for(i = 0; i < 100; i++)
    {
        printf("\nRider %d\n", i + 1);

        printf("Enter Name: ");
        fgets(r[i].name, sizeof(r[i].name), stdin);

        printf("Enter Rider ID: ");
        scanf("%d", &r[i].riderID);
        getchar();

        printf("Enter Zone: ");
        fgets(r[i].zone, sizeof(r[i].zone), stdin);

        printf("Enter deliveries for 30 days:\n");

        total = 0;

        for(j = 0; j < 30; j++)
        {
            scanf("%d", &r[i].deliveries[j]);
            total = total + r[i].deliveries[j];
        }

        printf("Enter Total Hours: ");
        scanf("%f", &r[i].totalHours);
        getchar();

        // Calculate efficiency
        r[i].efficiency = total / r[i].totalHours;

        // Check eligibility
        if(total >= 200)
        {
            //best-এর কাজ হলো এখন পর্যন্ত সবচেয়ে বেশি efficiency-ওয়ালা eligible rider-এর index রাখা।
            
            if(best == -1 ||   r[i].efficiency > r[best].efficiency)
            {
                best = i;
            }
        }
    }

    // Display winner
    if(best != -1)
    {
        printf("\n--- Rider of the Month ---\n");

        printf("Name: %s", r[best].name);
        printf("Rider ID: %d\n", r[best].riderID);
        printf("Zone: %s", r[best].zone);

        printf("Deliveries: ");
        for(j = 0; j < 30; j++)
        {
            printf("%d ", r[best].deliveries[j]);
        }

        printf("\nTotal Hours: %.2f\n", r[best].totalHours);
        printf("Efficiency: %.2f\n", r[best].efficiency);
    }
    else
    {
        printf("\nNo eligible rider.\n");
    }

    return 0;
}
