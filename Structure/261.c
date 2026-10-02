
#include <stdio.h>

struct Student
{
    char name[50];
    int id;
    char course[50];
    char phone[20];
    char email[50];
};

int main()
{
    struct Student s[100], temp;
    int n, i, j;

    printf("Enter number of students: ");
    scanf("%d", &n);
    getchar();

    // Input
    for(i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Enter Name: ");
        fgets(s[i].name, sizeof(s[i].name), stdin);

        printf("Enter ID: ");
        scanf("%d", &s[i].id);
        getchar();

        printf("Enter Course Name: ");
        fgets(s[i].course, sizeof(s[i].course), stdin);

        printf("Enter Phone: ");
        fgets(s[i].phone, sizeof(s[i].phone), stdin);

        printf("Enter Email: ");
        fgets(s[i].email, sizeof(s[i].email), stdin);
    }

    // Sort by ID
    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(s[i].id > s[j].id)
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    // Display
    printf("\nStudent Report\n");

    for(i = 0; i < n; i++)
    {
        printf("%s", s[i].name);
        printf("%d ", s[i].id);
        printf("%s", s[i].course);
        printf("%s", s[i].phone);
        printf("%s", s[i].email);
    }

    return 0;
}


/*#include <stdio.h>

struct student
{
    char name[50];
    int id;
    char course[30];
    char phone[20];
    char email[50];
};

int main()
{
    struct student s[100], temp;
    int n, i, j;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%s", s[i].name);

        scanf("%d", &s[i].id);

        scanf("%s", s[i].course);

        scanf("%s", s[i].phone);

        scanf("%s", s[i].email);
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (s[i].id > s[j].id)
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    printf("\nStudent Report:\n");

    for (i = 0; i < n; i++)
    {
        printf("%s %d %s %s %s\n",
               s[i].name,
               s[i].id,
               s[i].course,
               s[i].phone,
               s[i].email);
    }

    return 0;
}
*/