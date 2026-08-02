#include <stdio.h>

int main()
{
    int i, j;
    int n = 5;

    for(i = n; i >= 1; i--)
    {
        // Print Spaces
        for(j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        // Print Stars
        for(j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
/*
Output:
*********
 *******
  *****
   ***
    *  
*/