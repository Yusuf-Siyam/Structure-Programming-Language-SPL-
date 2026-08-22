#include <stdio.h>

int main()
{
    int arr[3][3], i, j, max;

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for(i = 0; i < 3; i++)
{
    max = arr[i][0];

    for(j = 0; j < 3; j++)
    {
        if(arr[i][j] > max)
        {
            max = arr[i][j];
        }
    }

    printf("%d\n", max);

}

    return 0;
}