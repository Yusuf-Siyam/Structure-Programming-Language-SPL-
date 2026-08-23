#include <stdio.h>

int main()
{
    int A[3][3], N = 3;
    int i, j;

    // Input
    for(i = 0; i < N; i++)
    {
        for(j = 0; j < N; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    // Swap first and last element of every row
    for(i = 0; i < N; ++i)
    {
        int temp = A[i][0];

        A[i][0] = A[i][N - 1]; //3-2=2 [0][2]  so A[0][0] = A[0][2]

        A[i][N - 1] = temp;
    }

    // Print array
    for(i = 0; i < N; i++)
    {
        for(j = 0; j < N; j++)
        {
            printf("%d ", A[i][j]);
        }

        printf("\n");
    }

    return 0;
}