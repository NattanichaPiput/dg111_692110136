#include <stdio.h>
int main()
{
    int n;
    printf("Enter positive integer: ");
    scanf("%d", &n);

    int isPrime = 1;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            isPrime = 0;
            break;
        }
    }
    if (isPrime == 1)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);
    return 0;
}