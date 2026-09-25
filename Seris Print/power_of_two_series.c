#include <stdio.h>

int main()
{
    int n, i;
    int term = 1;

    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        printf("%d ", term);

        term *= 2;
    }

    return 0;
}