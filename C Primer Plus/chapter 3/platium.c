#include <stdio.h>
int main(void)
{
    float weight;
    float value;
    printf("Are you worth your weight in platium?\n");
    printf("Let's check it out.\n");
    printf("Please enter your weight in pounds: ");
    scanf("%f", &weight);
    value = 1700.00 *weight*14.5833;
    printf("Your weight in platium is worth $%.2f.\n", value);
    printf("You are easily worth that! If platinum prices drop.\n");
    printf("eat more to maintain your value.\n");
    getchar();
    return 0;
}