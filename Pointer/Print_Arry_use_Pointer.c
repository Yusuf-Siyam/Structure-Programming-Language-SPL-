/* Question 2. Write a C program that reads 5 integers into an array from the user. Define a function
printArray( ) that accepts the array pointer and its size, and prints all elements by traversing the array
strictly using pointer arithmetic (*(ptr + i) or *ptr++), without using array bracket notation such as arr[i].
Sample Input: 10 20 30 40 50
Sample Output: Array elements: 10 20 30 40 50
*/

#include <stdio.h>

void printArray(int *p, int size)
{
    int i;

    printf("Array elements: ");

    for(i = 0; i < size; i++)
    {
        printf("%d ", *p++);  //printf("%d ", *(ptr + i));
    }
}

int main()
{
    int arr[5];
    int i;

    printf("Enter 5 integers: ");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printArray(arr, 5);

    return 0;
}

/*#include <stdio.h>

void printArray(int *p, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("%d ", *p);
        p++;
    }
}

int main()
{
    int A[5] = {10, 20, 30, 40, 50};

    printArray(A, 5);

    return 0;
}

*/