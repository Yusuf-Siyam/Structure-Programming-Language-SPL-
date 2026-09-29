#include <stdio.h>

int main()
{
    char str[200];
    int i;
    int spaces = 0;
    int capital = 0;
    int small = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            spaces++;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            capital++;
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            small++;
        }
    }

    printf("Spaces = %d\n", spaces);
    printf("Cap_letters = %d\n", capital);
    printf("Small_letters = %d\n", small);

    return 0;
}
