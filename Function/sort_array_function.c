#include <stdio.h>

void sortArray(int a[], int n)
{
    int temp;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main()
{
    int a[] = {40, 10, 50, 20, 30};

    sortArray(a, 5);

    printf("Sorted Array: ");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
