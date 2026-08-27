#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int i, arr1[n], arr2[n], sumArr[n];

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr2[i]);
    }

    for(i = 0; i < n; i++)
    {
        sumArr[i] = arr1[i] + arr2[i];
    }

    for(i = 0; i < n; i++)
    {
        printf("%d ", sumArr[i]);
    }

    return 0;
}