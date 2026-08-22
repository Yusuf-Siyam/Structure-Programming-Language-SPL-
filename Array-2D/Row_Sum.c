#include <stdio.h>

int main()
{
    int arr[3][3], sumArr[3], i, j, sum;

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for(i = 0; i < 3; i++)
    {
        sum = 0;

        for(j = 0; j < 3; j++)
        {
            sum += arr[i][j];
        }

        sumArr[i] = sum;
    }

    for(i = 0; i < 3; i++)
    {
        printf("%d ", sumArr[i]);
    }

    return 0;
}