#include <stdio.h>

int main()
{
    int num[100] = {10, 20, 30, 40, 50};
    int n = 5;
    int pos = 2;
    int value = 25;

    // Right shift
    for(int i = n-1; i >= pos; i--)
    {
        num[i] = num[i - 1];
    }
    // Insert value
    num[pos] = value;
    n++;

    // Print array
    for(int i = 0; i < n; i++)
    {
        printf("%d ", num[i]);
    }

    return 0;
}
output: 10 20 25 30 40 50