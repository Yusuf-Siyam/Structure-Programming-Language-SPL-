#include <stdio.h>

int main()
{
    int arr[3][3], i, j,arrMax[3], max;

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for(j = 0; j < 3; j++)
{
    max = arr[0][j];

    for(i = 0; i < 3; i++)
    {
        if(arr[i][j] > max)
        {
            max = arr[i][j];
        }
    
    }
    arrMax[j]=max;

}
for(j = 0; j < 3; j++){
    printf("%d ", arrMax[j]);
}

    return 0;
}