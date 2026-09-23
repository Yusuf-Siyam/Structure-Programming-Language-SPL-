#include <stdio.h>

void printArray(int *p, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("%d ", *p);
        p++;
    }
}

int main()
{
    int A[5] = {10, 20, 30, 40, 50};

    printArray(A, 5);

    return 0;
}

