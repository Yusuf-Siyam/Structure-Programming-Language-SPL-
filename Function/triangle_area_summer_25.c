#include <stdio.h>
#include <math.h>

int isTriangle(int x, int y, int z)
{
    if (x + y > z && x + z > y && y + z > x)
        return 1;
    else
        return 0;
}

float areaCal(int x, int y, int z)
{
    float s, area;

    s = (x + y + z) / 2.0;
    area = sqrt(s * (s - x) * (s - y) * (s - z));

    return area;
}

int main()
{
    int x, y, z;
    float area;

    printf("Enter three arms: ");
    scanf("%d %d %d", &x, &y, &z);

    if (isTriangle(x, y, z) == 1)
    {
        area = areaCal(x, y, z);
        printf("Area = %.2f\n", area);
    }
    else
    {
        printf("Invalid Triangle\n");
    }

    return 0;
}

// input: 3 4 5
//output: Area = 6.00
