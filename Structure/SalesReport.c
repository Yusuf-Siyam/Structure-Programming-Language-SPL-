#include <stdio.h>

struct Product
{
    char name[50];
    int pid;
    float unitPrice;
    int quantitySold;
    float revenue;
};

int main()
{
    struct Product p[100];
    int n, i;
    int highest = 0, lowest = 0;
    float total = 0, average;

    printf("Enter number of products: ");
    scanf("%d", &n);

    // Input
    for(i = 0; i < n; i++)
    {
        printf("\nEnter product %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", p[i].name);

        printf("PID: ");
        scanf("%d", &p[i].pid);

        printf("Unit Price: ");
        scanf("%f", &p[i].unitPrice);

        printf("Quantity Sold: ");
        scanf("%d", &p[i].quantitySold);

        // Calculate revenue
        p[i].revenue = p[i].unitPrice * p[i].quantitySold;

        total = total + p[i].revenue;
    }

    // Find highest and lowest revenue
    for(i = 1; i < n; i++)
    {
        if(p[i].revenue > p[highest].revenue)
            highest = i;

        if(p[i].revenue < p[lowest].revenue)
            lowest = i;
    }

    average = total / n;

    // Display report
    printf("\nSales Report\n");
    printf("---------------------------------------------------------------\n");
    printf("%-12s %-8s %-12s %-12s %-12s\n",
           "Name", "PID", "Unit Price", "Quantity", "Revenue");
    printf("---------------------------------------------------------------\n");

    for(i = 0; i < n; i++)
    {
        printf("%-12s %-8d %-12.2f %-12d %-12.2f\n",
               p[i].name,
               p[i].pid,
               p[i].unitPrice,
               p[i].quantitySold,
               p[i].revenue);
    }

    printf("\nHighest revenue: %s (%d)\n",
           p[highest].name, p[highest].pid);

    printf("Lowest revenue: %s (%d)\n",
           p[lowest].name, p[lowest].pid);

    printf("Average revenue: %.2f\n", average);

    return 0;
}