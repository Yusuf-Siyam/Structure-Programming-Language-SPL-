#include <stdio.h>

struct Student
{
    char name[50];
    int id;
    float marks;
};

int main()
{
    struct Student s[100];
    int n, i;
    int min = 0, max = 0;
    float sum = 0, average;

    printf("Enter number of students: ");
    scanf("%d", &n);
    

    // Input
    for(i = 0; i < n; i++)
    {
        getchar(); //loop to consume the newline character left by previous scanf

        printf("Enter Name: ");
        fgets(s[i].name, sizeof(s[i].name), stdin);

        printf("Enter ID: ");
        scanf("%d", &s[i].id);

        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);
    }

    // Find minimum, maximum and sum
    for(i = 0; i < n; i++)
    {
        sum = sum + s[i].marks;

        if(s[i].marks < s[min].marks)
        {
            min = i;
        }

        if(s[i].marks > s[max].marks)
        {
            max = i;
        }
    }

    average = sum / n;

    // Display report
    printf("\nStudent Report:\n");

    for(i = 0; i < n; i++)
    {
        printf("%s%d %.1f\n", s[i].name, s[i].id, s[i].marks);
    }

    printf("Minimum marks holder student: %s%d\n",
           s[min].name, s[min].id);

    printf("Maximum marks holder student: %s%d\n",
           s[max].name, s[max].id);

    printf("Average: %.1f\n", average);

    return 0;
}

/*  output:
Enter number of students: 3 
Enter name: Rahim
Enter ID: 10        
Enter marks: 85.0


Saiham 20 85.4
Sabera 15 82.8
Farhan 18 80.0


Minimum marks holder student: Farhan 18
Maximum marks holder student: Saiham 20
Average: 83.3
*/