#include <stdio.h>
int main()
{
    printf("== Input your information ==\n");
    char name[25];
    printf("Name: ");
    scanf("%s", name);
    int age;
    printf("Age: ");
    scanf("%d", &age);
    float gpa;
    printf("GPA: ");
    scanf("%f", &gpa);
    char major[25];
    printf("Major: ");
    scanf("%s", major);

    printf("\n");
    printf("== PERSONAL CARD ==\n");
    printf("┌───────────────────────┐\n");
    printf("│ Name: %-10s\t│\n", name);
    printf("│ Age: %-10d\t│\n", age);
    printf("│ GPA: %-10.2f\t│\n", gpa);
    printf("│ Major: %-10s\t│\n", major);
    printf("└───────────────────────┘\n");
    return 0;
}