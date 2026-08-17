#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int i, num[100];

    for(i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }

    int max = num[0];

    for(i = 0; i < n; i++) //i<=n-1
    {
        if(num[i] > max)
        {
            max = num[i];
        }
    }

    printf("%d", max);

    return 0;
}