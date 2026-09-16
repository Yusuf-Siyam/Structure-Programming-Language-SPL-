#include <stdio.h>

int main()
{
    char str[100];
    int i, vowel = 0, consonant = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
            str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
            str[i] == 'O' || str[i] == 'U')
        {
            vowel++;
        }
        else if ((str[i] >= 'a' && str[i] <= 'z') ||
                 (str[i] >= 'A' && str[i] <= 'Z'))
        {
            consonant++;
        }
    }

    printf("Vowels = %d\n", vowel);
    printf("Consonants = %d\n", consonant);

    return 0;
}

//
#include <stdio.h>

int main()
{
    char str[100];
    int i;
    int vowel = 0, consonant = 0, digit = 0, special = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
            str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
            str[i] == 'O' || str[i] == 'U')
        {
            vowel++;
        }
        else if ((str[i] >= 'a' && str[i] <= 'z') ||
                 (str[i] >= 'A' && str[i] <= 'Z'))
        {
            consonant++;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            digit++;
        }
        else if (str[i] != ' ' && str[i] != '\n')
        {
            special++;
        }
    }

    printf("Vowels = %d\n", vowel);
    printf("Consonants = %d\n", consonant);
    printf("Digits = %d\n", digit);
    printf("Special Characters = %d\n", special);

    return 0;
}