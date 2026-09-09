#include <stdio.h>

float average(int a[], int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }

    return (float)sum / n;
}

int main()
{
    int a[] = {10, 20, 30, 40, 50};

    printf("Average = %.2f\n", average(a, 5));

    return 0;
}