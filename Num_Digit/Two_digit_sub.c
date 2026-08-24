#include <stdio.h>

int main()
{
    int num, digit1, digit2, diff;

    scanf("%d", &num);

    while(num > 9)
    {
        digit1 = num % 10;
        num = num / 10;
        digit2 = num % 10;

        diff = digit2 - digit1;

        if(diff < 0)
        {
            diff = -diff;
        }

        printf("%d\n", diff);
    }

    return 0;
}

/*
8396

9 - 6 = 3
3 - 9 = -6 → 6
8 - 3 = 5

/*