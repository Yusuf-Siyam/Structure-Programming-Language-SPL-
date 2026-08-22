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

    for(j = 0; j< 3; j++)
    {
        sum = 0;

        for(i = 0; i < 3; i++)
        {
            sum += arr[i][j];
        }

        sumArr[j] = sum;
    }

    for(j = 0; j< 3; j++)
    {
        printf("%d ", sumArr[j]);
    }

    return 0;
}