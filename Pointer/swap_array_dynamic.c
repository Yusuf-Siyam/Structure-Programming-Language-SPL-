#include <stdio.h>

// Function to swap elements of the array using two pointers
// p1 starts at the beginning, p2 starts at the end
// They move toward each other, swapping elements as they go
void swapArray(int *p1, int *p2, int n)
{
    int i, temp;

    // Loop runs only half the array length
    // (no need to swap the same pair twice)
    for (i = 0; i < n / 2; i++)
    {
        temp = *p1;   // save value pointed to by p1
        *p1 = *p2;    // copy value from p2 into p1's position
        *p2 = temp;   // copy saved value into p2's position

        p1++;   // move p1 forward (toward the middle)
        p2--;   // move p2 backward (toward the middle)
    }
}

int main()
{
    int n;

    // Ask user how many elements they want to enter
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];   // Variable Length Array (VLA), sized based on user input

    // Read 'n' elements into the array
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Call swapArray:
    // arr           -> pointer to first element (index 0)
    // arr + (n - 1) -> pointer to last element (index n-1)
    // n             -> total number of elements
    swapArray(arr, arr + (n - 1), n);

    // Print the array after swapping
    printf("After swap: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

/*
#include <stdio.h>

void swapArray(int *p1, int *p2, int n)
{
    int i, temp;

    for (i = 0; i < n / 2; i++)
    {
        p2 = p1 + n - 1 - i;

        temp = *p1;
        *p1 = *p2;
        *p2 = temp;

        p1++;
    }
}

int main()
{
    int arr[5], i;

    printf("Enter 5 elements: ");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    swapArray(arr, arr+(5-1), 5);

    printf("After swap: ");

    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

*/