```c
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100];
    char str2[100];
    char result[200];
    int i, j;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline from str1 and str2
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    // Copy str1 to result
    for(i = 0; str1[i] != '\0'; ++i)
        result[i] = str1[i];

    // Copy str2 to result
    for(j = 0; str2[j] != '\0'; ++j)
        result[i + j] = str2[j];

    // Add null character
    result[i + j] = '\0';

    printf("Concatenated string: %s\n", result);

    return 0;
}
/*
result[i + j] = str2[j];
result[4 + 0] = str2[0];
result[4] = 'D';

#include <stdio.h>
#include <string.h>

void concatenate(char str1[], char str2[], char result[]);

int main()
{
    char str1[100];
    char str2[100];
    char result[200];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    concatenate(str1, str2, result);

    printf("Concatenated string: %s\n", result);

    return 0;
}

void concatenate(char str1[], char str2[], char result[])
{
    int i, j;

    // Copy str1 to result
    for(i = 0; str1[i] != '\0'; ++i)
        result[i] = str1[i];

    // Copy str2 to result
    for(j = 0; str2[j] != '\0'; ++j)
        result[i + j] = str2[j];

    // Add null character
    result[i + j] = '\0';
}

*/



//use strcat() function to concatenate two strings

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100];
    char str2[100];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    strcat(str1, str2);

    printf("Concatenated String: %s", str1);

    return 0;
}
