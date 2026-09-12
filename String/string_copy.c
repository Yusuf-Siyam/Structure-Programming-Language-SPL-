#include <stdio.h>

int main()
{
    char str1[100];
    char str2[100];
    int i = 0;

    printf("Enter a string: ");
    fgets(str1, sizeof(str1), stdin);

    while (str1[i] != '\0')
    {
        str2[i] = str1[i];
        i++;
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
    char a[100];
    char b[100];

    printf("Enter a string: ");
    fgets(a, sizeof(a), stdin);

    strcpy(b, a);

    printf("Copied String = %s", b);

    return 0;
}
    
This program copies a string from one variable to another. */
