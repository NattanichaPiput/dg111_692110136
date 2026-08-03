#include <stdio.h>
int main()
{
    int sum = 0;
    int sumJ = 0;
    int sumK = 0;
    // 1 for loops
    int i;
    //   init;condition;update
    for (int i = 1; i <= 10; i++)
    {
        sum += i;
    }
    printf("Sum: %d\n", sum);

    // 2 while loops
    int j = 1;
    while (j <= 10)
    {
        sumJ += j;
        j++;
    }
    printf("Sum: %d\n", sumJ);

    // 3 do-while loops
    int k = 1;
    do
    {
        sumK += k;
        k++;
    } while (k <= 10);
    printf("Sum: %d\n", sumK);

    return 0;
}
