#include <stdio.h>

double calculateSubtotal(int quantities[], double unitPrices[], int itemCount)
{
    double subtotal = 0;
    int i;

    for (i = 0; i < itemCount; i++)
    {
        subtotal = subtotal + quantities[i] * unitPrices[i];
    }

    return subtotal;
}

double applyDiscount(double subtotal)
{
    if (subtotal < 100)
    {
        return subtotal;
    }
    else if (subtotal <= 500)
    {
        return subtotal * 0.90;
    }
    else
    {
        return subtotal * 0.80;
    }
}

int main()
{
    int quantities[5];
    double unitPrices[5];
    double subtotal, finalTotal, discount;
    int i;

    printf("Enter quantity and unit price for 5 items:\n");

    for (i = 0; i < 5; i++)
    {
        printf("Item %d: ", i + 1);
        scanf("%d %lf", &quantities[i], &unitPrices[i]);
    }

    subtotal = calculateSubtotal(quantities, unitPrices, 5);

    finalTotal = applyDiscount(subtotal);

    discount = subtotal - finalTotal;

    printf("\nSubtotal = $%.2lf\n", subtotal);
    printf("Discount = $%.2lf\n", discount);
    printf("Final Total = $%.2lf\n", finalTotal);

    return 0;
}

