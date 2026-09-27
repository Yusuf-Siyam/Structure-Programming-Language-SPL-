#include <stdio.h>
#include <string.h>

void reverseString(char *str)
{
    char *start = str;
    char *end = str + strlen(str) - 1;
    char temp;

    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    reverseString(str);

    printf("Reversed string: %s", str);

    return 0;
}

/*

#include <stdio.h>
#include <string.h>

void reverseString(char *str)
{
    int len = strlen(str);
    int i;
    char temp;

    for(i = 0; i < len / 2; i++)
    {
        temp = *(str + i);
        *(str + i) = *(str + len - 1 - i);
        *(str + len - 1 - i) = temp;
    }
}

int main()
{
    char str[100];

    scanf("%s", str);

    reverseString(str);

    printf("%s", str);

    return 0;
}

*/