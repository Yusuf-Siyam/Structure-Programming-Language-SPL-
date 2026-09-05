#include <stdio.h>

void minmax(int a[], int n, int result[])
{
    result[0] = a[0];  // Minimum
    result[1] = a[0];  // Maximum

    for (int i = 1; i < n; i++)
    {
        if (a[i] < result[0])
            result[0] = a[i];

        if (a[i] > result[1])
            result[1] = a[i];
    }
}

int main()
{
    int a[] = {10, 5, 20, 8, 15};
    int result[2];

    minmax(a, 5, result);

    printf("Min = %d\n", result[0]);
    printf("Max = %d\n", result[1]);

    return 0;
}