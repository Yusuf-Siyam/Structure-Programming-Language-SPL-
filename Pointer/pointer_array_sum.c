#include <stdio.h>

int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int *p = a;
    int sum = 0;
    int i;

    for (i = 0; i < 5; i++)
    {
        sum = sum + *p;
        p++;
    }

    printf("Sum = %d\n", sum);

    return 0;
}
