
#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    int i = 0;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    while(str1[i] == str2[i] && str1[i] != '\0')
    {
        i++;
    }

    if(str1[i] == str2[i])
        printf("Both strings are equal");
    else if(str1[i] < str2[i])
        printf("%s comes first alphabetically", str1);
    else
        printf("%s comes first alphabetically", str2);

    return 0;
}