#include <stdio.h>

int main()
{
    int num[100] = {10, 20, 30, 40, 50};
    int n = 5;
    int pos = 2;

    // Left shift
    for(int i = pos; i < n - 1; i++)
    {
        num[i] = num[i + 1];
    }

    n--;

    // Print array
    for(int i = 0; i < n; i++)
    {
        printf("%d ", num[i]);
    }

    return 0;
}
pos=2

output:10 20 40 50
