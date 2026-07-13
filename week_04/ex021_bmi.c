#include <stdio.h>
int main()
{
    printf("== BMI Calculator ==\n");
    float weight;
    printf("Input Weight (kg): ");
    scanf("%f", &weight);
    int height;
    printf("Input Height (cm): ");
    scanf("%d", &height);

    float height_m = height / 100.0;
    float BMI = weight / (height_m * height_m);

    if (BMI < 18.5)
    {
        printf("Output BMI: %.2f -> Underweight\n", BMI);
    }
    else if (BMI >= 18.5 && BMI < 25)
    {
        printf("Output BMI: %.2f -> Normal\n", BMI);
    }
    else if (BMI >= 25 && BMI < 30)
    {
        printf("Output BMI: %.2f -> Overweight\n", BMI);
    }
    else
    {
        printf("Output BMI: %.2f -> Obese\n", BMI);
    }

    return 0;
}