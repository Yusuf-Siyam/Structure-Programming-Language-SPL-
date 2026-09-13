#include <stdio.h>

int main()
{
    char str1[100];
    char str2[100];
    int i, j;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    for (i = 0; str1[i] != '\0' && str1[i] != '\n'; i++)
    {
    }

    for (j = 0; str2[j] != '\0' && str2[j] != '\n'; j++)
    {
        str1[i] = str2[j];
        i++;
    }

    str1[i] = '\0';

    printf("Concatenated String: %s", str1);

    return 0;
}