#include <stdio.h>

struct Student
{
    int id;
    char name[50];
    float gpa[8];
    float cgpa;
};

int main()
{
    struct Student s[100];
    int n, i, j;
    float sum;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\nEnter Student ID: ");
        scanf("%d", &s[i].id);

        printf("Enter Name: ");
        scanf("%s", s[i].name);

        sum = 0;

        printf("Enter GPA of 8 semesters:\n");

        for (j = 0; j < 8; j++)
        {
            scanf("%f", &s[i].gpa[j]);
            sum = sum + s[i].gpa[j];
        }

        s[i].cgpa = sum / 8;

        if (s[i].cgpa > 3.75)
        {
            printf("Student with id=%d is eligible for scholarship\n", s[i].id);
        }
        else
        {
            printf("Student with id=%d is not eligible for scholarship\n", s[i].id);
        }
    }

    return 0;
}