#include <stdio.h>

struct Student
{
    int id;
    char name[50];
    float cgpa;
};

int main()
{
    struct Student s[3];
    int i, max = 0;

    for (i = 0; i < 3; i++)
    {
        printf("Enter ID: ");
        scanf("%d", &s[i].id);
        getchar();

        printf("Enter Name: ");
        fgets(s[i].name, sizeof(s[i].name), stdin);

        printf("Enter CGPA: ");
        scanf("%f", &s[i].cgpa);
    }

    for (i = 1; i < 3; i++)
    {
        if (s[i].cgpa > s[max].cgpa)
            max = i;
    }

    printf("\nStudent with Maximum CGPA:\n");
    printf("ID = %d\n", s[max].id);
    printf("Name = %s", s[max].name);
    printf("CGPA = %.2f\n", s[max].cgpa);

    return 0;
}

/*  output:
Student with Maximum CGPA:
ID = 102
Name = Rahim
CGPA = 3.80*/

/*
int i, max = arr[0];
for (i = 1; i < n; i++)
{
    if (arr[i] > max)
        max = arr[i];
}
*/

