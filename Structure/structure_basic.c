#include <stdio.h>

struct Student
{
    int id;
    char name[50];
    float cgpa;
};

int main()
{
    struct Student s;

    printf("Enter ID: ");
    scanf("%d", &s.id);

    printf("Enter Name: ");
    scanf("%s", s.name);

    printf("Enter CGPA: ");
    scanf("%f", &s.cgpa);

    printf("\nStudent Information:\n");
    printf("ID = %d\n", s.id);
    printf("Name = %s\n", s.name);
    printf("CGPA = %.2f\n", s.cgpa);

    return 0;
}