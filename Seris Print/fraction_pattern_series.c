#include <stdio.h>

int main()
{
    int n, i;
    float sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum = sum + (float)i / (i + 1);
    }

    printf("Sum = %.2f\n", sum);

    return 0;
}
//1/2 + 2/3 + 3/4 + ... + n/(n+1)
//input :4 output : 2.08