#include <stdio.h>

int main()
{
    int i, sum = 0;

    for(i = 1; i <= 10; i++)
    {
        if(i % 2 == 1)
            sum += i;
        else
            sum -= i;
    }

    printf("Sum = %d", sum);

    return 0;
}

//1 - 2 + 3 - 4 + ... - 10