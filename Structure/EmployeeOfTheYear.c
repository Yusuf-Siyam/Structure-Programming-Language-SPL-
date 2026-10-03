#include <stdio.h>
#include <string.h>

struct Employee
{
    char name[50];
    int empID;
    char role[10];
    int commits[12];
    int bugs[12];
    int monthsWorked;
    float score;
};

int main()
{
    struct Employee e[50];

    int i, j;
    int totalCommits, totalBugs;
    int best = 0;

    // Input for 50 employees
    for(i = 0; i < 50; i++)
    {
        printf("\nEmployee %d\n", i + 1);

        printf("Enter Name: ");
        fgets(e[i].name, sizeof(e[i].name), stdin);

        printf("Enter Employee ID: ");
        scanf("%d", &e[i].empID);
        getchar();

        printf("Enter Role (developer/tester): ");
        fgets(e[i].role, sizeof(e[i].role), stdin);

        printf("Enter commits for 12 months:\n");

        totalCommits = 0;

        for(j = 0; j < 12; j++)
        {
            scanf("%d", &e[i].commits[j]);
            totalCommits = totalCommits + e[i].commits[j];
        }

        printf("Enter bugs found for 12 months:\n");

        totalBugs = 0;

        for(j = 0; j < 12; j++)
        {
            scanf("%d", &e[i].bugs[j]);
            totalBugs = totalBugs + e[i].bugs[j];
        }

        printf("Enter Months Worked: ");
        scanf("%d", &e[i].monthsWorked);
        getchar();

        // Calculate score
        if(strcmp(e[i].role, "developer\n") == 0)
        {
            e[i].score = (float)totalCommits / e[i].monthsWorked;
        }
        else
        {
            e[i].score = (float)totalBugs / e[i].monthsWorked;
        }

        // Find highest score
        if(e[i].score > e[best].score)
        {
            best = i;
        }
    }

    // Display Employee of the Year
    printf("\n--- Employee of the Year ---\n");

    printf("Name: %s", e[best].name);
    printf("Employee ID: %d\n", e[best].empID);
    printf("Role: %s", e[best].role);
    printf("Months Worked: %d\n", e[best].monthsWorked);
    printf("Score: %.2f\n", e[best].score);

    return 0;
}