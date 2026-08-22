#include <stdio.h>

int main()
{
    int R, C, arr[100][100], i, j;

    scanf("%d %d", &R, &C);

    // Input
    for(i = 0; i < R; i++)
    {
        for(j = 0; j < C; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // Reverse every row
    for(i = 0; i < R; i++)
    {
        for(j = C - 1; j >= 0; j--)
        {
            printf("%d ", arr[i][j]);
        }

        printf("\n");
    }

    return 0;
}