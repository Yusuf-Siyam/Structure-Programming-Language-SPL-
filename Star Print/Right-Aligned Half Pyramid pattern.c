#include <stdio.h>
int main()
{
    int i, j,k ;

    for(i = 1; i <= 5; i++)
    {
        // Print spaces
        for(j = 1; j <= 5 - i; j++)
        {
            printf(" ");
        }
        // Print stars
        for(k = 1; k <= i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
/*
Right-Aligned Half Pyramid Pattern

    *
   **
  ***
 ****
*****
            
*/