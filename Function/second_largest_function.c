#include <stdio.h>

int secondLargest(int a[], int n)
{
    int largest = a[0];
    int second = a[1];

    if (second > largest)
    {
        int temp = largest;
        largest = second;
        second = temp;
    }

    for (int i = 2; i < n; i++)
    {
        if (a[i] > largest)
        {
            second = largest;
            largest = a[i];
        }
        else if (a[i] > second && a[i] != largest)
        {
            second = a[i];
        }
    }

    return second;
}

int main()
{
    int a[] = {10, 50, 20, 40, 30};

    printf("Second Largest = %d\n", secondLargest(a, 5));
#include <stdio.h>

int secondLargest(int a[], int n)
{
    int largest = a[0];
    int second = a[1];

    if (second > largest)
    {
        int temp = largest;
        largest = second;
        second = temp;
    }

    for (int i = 2; i < n; i++)
    {
        if (a[i] > largest)
        {
            second = largest;
            largest = a[i];
        }
        else if (a[i] > second && a[i] != largest)
        {
            second = a[i];
        }
    }

    return second;
}

int main()
{
    int a[] = {10, 50, 20, 40, 30};

    printf("Second Largest = %d\n", secondLargest(a, 5));

    return 0;
}
    return 0;
}