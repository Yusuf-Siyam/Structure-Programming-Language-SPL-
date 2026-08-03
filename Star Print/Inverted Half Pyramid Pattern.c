#include <stdio.h>

int main()
{
    int i, j;

    for(i = 1; i <=5; i++)
    {
        for(j = 5; j >= i; j--)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

/*
#include <stdio.h>

int main() {
int i ,j;
for(i=1;i<=5;i++){
    for(j=1;j<=6-i;j++){
        printf("*");
    }
    printf("\n");
}
    return 0;
}
    
    ---------------------------
Inverted Half Pyramid Pattern
#include <stdio.h>

int main()
{
    int i, j, n;

    printf("Enter height: ");
    scanf("%d", &n);

    for(i = n; i >= 1; i--)
    {
        for(j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

*****
****
***
**
*   

*/