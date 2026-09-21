#include <stdio.h>

int Differ(int x, int y)
{
    if (x - y > 0)
        return 1;
    else
        return 0;
}

int CalValue(int x, int y)
{
    int result;

    if (Differ(x, y) == 1)
        result = (x + y) * (x - y);
    else
        result = (y + x) * (y - x);

    return result;
}

int main()
{
    int x, y, result;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    result = CalValue(x, y);

    printf("Result = %d\n", result);

    return 0;
}
//This program defines two functions, Differ and CalValue, to perform calculations based on the difference between two integers. The Differ function checks if the difference between x and y is positive, returning 1 if true and 0 otherwise. The CalValue function uses Differ to determine which calculation to perform: if x is greater than y, it calculates (x + y) * (x - y); otherwise, it calculates (y + x) * (y - x). The main function prompts the user for two integers, calls CalValue with those integers, and prints the result.
//input: 5 3
//output: Result = 16

