#include <stdio.h>
int main()
{
    printf("== Input your information ==\n");
    char name[50];
    printf("Name: ");
    scanf("%s", name);
    int age;
    printf("Age: ");
    scanf("%d", &age);
    float gpa;
    printf("GPA: ");
    scanf("%.2f", &gpa);
    char fav_subj[50];
    printf("Favorite subject: ");
    scanf("%s", fav_subj);
    printf("\n");
    printf("== Your Personal Information ==\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("GPA: %.2f\n", gpa);
    printf("Favorite subject: %s\n", fav_subj);
    return 0;
}