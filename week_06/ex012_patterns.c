#include <stdio.h>
int main()
{
    int i, j, k;

    // 1.Triangle
    printf("1. Triangle\n");
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    // 3. Square
    printf("2. Square (n=4)\n");
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= 4; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    // 3. diamond
    printf("3. Diamond (n=3)\n");
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 3 - i; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= 2 * i - 1; k++)
        {
            printf("*");
        }

        printf("\n");
    }
    for (i = 2; i >= 1; i--)
    {
        for (j = 1; j <= 3 - i; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= 2 * i - 1; k++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}