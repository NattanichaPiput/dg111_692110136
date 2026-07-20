#include <stdio.h>

int main()
{
    int score;
    printf("Enter your score: ");
    scanf("%d", &score);

    if (score <= 100 && score >= 80)
    {
        printf("Score: %d → Grade: A (4.0) — Pass\n", score);
    }
    else if (score < 80 && score >= 75)
    {
        printf("Score: %d → Grade: B+ (3.5) — Pass\n", score);
    }
    else if (score < 75 && score >= 70)
    {
        printf("Score: %d → Grade: B (3.0) — Pass\n", score);
    }
    else if (score < 70 && score >= 65)
    {
        printf("Score: %d → Grade: C+ (2.5) — Pass\n", score);
    }
    else if (score < 65 && score >= 60)
    {
        printf("Score: %d → Grade: C (2.0) — Pass\n", score);
    }
    else if (score < 60 && score >= 55)
    {
        printf("Score: %d → Grade: D+ (1.5) — Pass\n", score);
    }
    else if (score < 55 && score >= 50)
    {
        printf("Score: %d → Grade: D (1.0) — Pass\n", score);
    }
    else if (score < 50 && score >= 0)
    {
        printf("Score: %d → Grade: F (0.0) — Fail\n", score);
    }
    else
    {
        printf("Invalid score entered.\n");
    }
    return 0;
}