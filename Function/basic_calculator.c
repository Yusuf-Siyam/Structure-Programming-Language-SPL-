#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int multiply(int a, int b)
{
    return a * b;
}

double divide(int a, int b)
{
    if (b == 0)
    {
        printf("Error: Division by zero\n");
        return -1;
    }

    return (double)a / b;
}

int remainderOp(int a, int b)
{
    if (b == 0)
    {
        printf("Error: Division by zero\n");
        return -1;
    }

    return a % b;
}

int main()
{
    int a, b, choice;

    printf("1. Add\n");
    printf("2. Multiply\n");
    printf("3. Divide\n");
    printf("4. Remainder\n");

    printf("Enter choice: ");
    scanf("%d", &choice);

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    if (choice == 1)
        printf("Result = %d\n", add(a, b));
    else if (choice == 2)
        printf("Result = %d\n", multiply(a, b));
    else if (choice == 3)
        printf("Result = %.2lf\n", divide(a, b));
    else if (choice == 4)
        printf("Result = %d\n", remainderOp(a, b));
    else
        printf("Invalid choice\n");

    return 0;
}

