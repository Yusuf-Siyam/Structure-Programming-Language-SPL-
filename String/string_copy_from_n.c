
#include <stdio.h>

int main()
{
    char str1[100];
    char str2[100];
    int n, i;

    printf("Enter a string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        str2[i] = str1[i];
    }

    str2[i] = '\0';

    printf("Copied String: %s", str2);

    return 0;
}


/*
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100];
    char str2[100];
    int n;

    printf("Enter a string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter n: ");
    scanf("%d", &n);

    strncpy(str2, str1, n);
    str2[n] = '\0';

    printf("Copied String: %s", str2);

    return 0;
}
    input:

    str1: H e l l o   W o r l d
         └─────────┘
        5 chars

    output    
    str2 = H e l l o \0

This program copies a string from one variable to another starting from a specified position. */
*/
