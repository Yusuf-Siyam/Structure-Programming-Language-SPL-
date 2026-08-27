#include <stdio.h>

int main()
{
    int num, sum = 0, count = 0;
    float average;

    while(1)
    {
        scanf("%d", &num);

        if(num == 0)
            break;

        if(num > 0)
        {
            sum += num;
            count++;
        }
    }

    if(count > 0)
    {
        average = (float)sum / count;
        printf("Average = %.2f", average);
    }

    return 0;
}

/*
16
17
-18
20
-24
0 stop
output: 
sum = 16 + 17 + 20 = 53
count = 3

average = 53 / 3 = 17.67
*/ 
