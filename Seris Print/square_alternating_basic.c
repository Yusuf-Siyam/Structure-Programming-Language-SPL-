#include <stdio.h>

int main()
{
    int i, sum = 0;

    for(i = 2; i <= 100; i += 2)
    {
        if(i % 4 == 2)
            sum += i * i;
        else
            sum -= i * i;
    }

    printf("Sum = %d", sum);

    return 0;
}
//2² - 4² + 6² - 8² + ... - 100²

