#include <stdio.h>

int reverseNumber(int num)
{
    int rem, rev = 0;

    while (num != 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }

    return rev;
}

int main()
{
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Reverse number = %d\n", reverseNumber(num));

    return 0;
}