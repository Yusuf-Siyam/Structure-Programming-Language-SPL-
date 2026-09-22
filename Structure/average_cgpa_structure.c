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
    int i;
    float sum = 0, average;

    for (i = 0; i < 3; i++)
    {
        printf("Enter ID: ");
        scanf("%d", &s[i].id);
        getchar();

        printf("Enter Name: ");
        fgets(s[i].name, sizeof(s[i].name), stdin);

        printf("Enter CGPA: ");
        scanf("%f", &s[i].cgpa);

        sum = sum + s[i].cgpa;
    }

    average = sum / 3;

    printf("\nAverage CGPA = %.2f\n", average);

    return 0;
}

/*  output:
