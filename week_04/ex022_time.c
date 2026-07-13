#include <stdio.h>
int main()
{
    int seconds;
    printf("Input seconds: ");
    scanf("%d", &seconds);
    int hours = seconds / 3600;
    int minutes = (seconds % 3600) / 60;
    seconds = seconds % 60;
    printf("Output: %d:%02d:%02d\n", hours, minutes, seconds);
    return 0;
}