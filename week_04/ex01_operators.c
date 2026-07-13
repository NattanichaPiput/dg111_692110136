#include <stdio.h>
int main()
{
    printf("== Integer Division & Modulo ==\n");
    printf("Expression 1 : 10 / 3 = %d\n", 10 / 3);
    int expression_1 = 10 / 3;
    printf("Expression 1.2 : 10 / 3 = %d\n", expression_1);
    printf("Expression 2 : 10.0 / 3 = %.2f\n", 10.0 / 3);
    printf("Expression 3 : (float)10 / 3 = %.2f\n", (float)10 / 3);
    printf("Expression 4 : 10 % 3 = %d\n", 10 % 3);
    printf("Expression 5 : -7 % 3 = %d\n", -7 % 3);
    printf("Expression 6 : 7 % -3 = %d\n", 7 % -3);

    printf("\n");

    printf("== Increment & Decrement ==\n");
    int x = 5;
    printf("x++ = %d\n", x++);
    printf("x = %d\n", x);
    x = 5;
    printf("++x = %d\n", ++x);
    printf("x = %d\n", x);

    printf("\n");

    printf("== Procedence Test ==\n");
    printf("2 + 3 * 4 = %d\n", 2 + 3 * 4);
    printf("(2 + 3) * 4 = %d\n", (2 + 3) * 4);
    printf("10 - 2 - 3 = %d\n", 10 - 2 - 3);
    printf("2*3 + 4*5 = %d\n", 2 * 3 + 4 * 5);
    return 0;
}