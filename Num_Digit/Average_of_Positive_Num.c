#include <stdio.h>

int main()
{
    int n, num, count = 0, sum = 0;
    float average;

    scanf("%d", &n);

    while(count < n)
    {
        scanf("%d", &num);

        if(num > 0)
        {
            sum += num;
            count++;

            average = (float)sum / count;

            printf("%.2f\n", average);
        }
    }

    return 0;
}

/*
3
16
17
-18
20
-24

output:
16.00
16.50
17.67
*/