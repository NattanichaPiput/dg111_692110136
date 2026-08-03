#include <stdio.h>
int main()
{
    int count = 1;

    for (int row = 1; row <= 3; row++)
    {
        printf("+---+---+---+---+---+\n|");
        for (int col = 1; col <= 5; col++)
        {
            printf("%2d |", count);
            count++;
        }
        printf("\n");
    }
    printf("+---+---+---+---+---+");

    return 0;
}