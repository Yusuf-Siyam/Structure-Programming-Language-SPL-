#include <stdio.h>

int main()
{
    int n, i;
    int fact = 1, sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
        sum = sum + fact;
    }

    printf("Sum = %d\n", sum);

    return 0;
}
//1! + 2! + 3! + ... + n!
// input :4 output : 33
