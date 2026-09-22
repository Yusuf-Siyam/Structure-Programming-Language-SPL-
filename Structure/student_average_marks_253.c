#include <stdio.h>

struct Student
{
    char name[50];
    int id;
    float course1;
    float course2;
    char phone[20];
    char email[50];
};

int main()
{
    struct Student s[2];
    int i;
    float average;

    for (i = 0; i < 2; i++)
    {
        printf("Enter Name: ");
        scanf("%s", s[i].name);

        printf("Enter ID: ");
        scanf("%d", &s[i].id);

        printf("Enter Course-I Marks: ");
        scanf("%f", &s[i].course1);

        printf("Enter Course-II Marks: ");
        scanf("%f", &s[i].course2);

        printf("Enter Phone: ");
        scanf("%s", s[i].phone);

        printf("Enter Email: ");
        scanf("%s", s[i].email);
    }

    printf("\nStudent Report:\n");

    for (i = 0; i < 2; i++)
    {
        printf("%s %d %.1f %.1f %s %s\n",
               s[i].name, s[i].id, s[i].course1,
               s[i].course2, s[i].phone, s[i].email);

        average = (s[i].course1 + s[i].course2) / 2;

        printf("Average Marks of %s is %.1f\n",
               s[i].name, average);
    }

    return 0;
}
/* input:
Rahim
10
80
90
01632078812
xxx@gmail.com

Saiham
20
70
80
01710012300
yyy@hotmail.com

output:
Student Report:
Rahim 10 80.0 90.0 01632078812 xxx@gmail.com
Average Marks of Rahim is 85.0
Saiham 20 70.0 80.0 01710012300 yyy@hotmail.com
Average Marks of Saiham is 75.0

*/