#include <stdio.h>

int countDigits(int num)
{
    int count = 0;

    if (num == 0)
        return 1;

    while (num != 0)
    {
        count++;
        num = num / 10;
    }

    return count;
}

int main()
{
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Total digits = %d\n", countDigits(num));

    return 0;
}
/*
Enter an integer: 12345
Total digits = 5

*/