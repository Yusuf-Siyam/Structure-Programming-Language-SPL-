#include <stdio.h>

int main()
{
    char str[100] = "", rev[100] = "";
    int i, len = 0;

    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++)
    {
        len++;
    }

    for (i = 0; i < len; i++)
    {
        rev[i] = str[len - 1 - i];
    }

    rev[len] = '\0';

    puts(rev);

    return 0;
}


//-----------------------------

#include <stdio.h>

int main()
{
    char str[100];
    int i, len = 0;
    char temp;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++)
    {
        len++;
    }

    for (i = 0; i < len / 2; i++)
    {
        temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }

    printf("Reverse String: %s", str);

    return 0;
}