#include <stdio.h>

#define MACRO(weight, height) ((double)(weight) / (((height) / 100.0) * ((height) / 100.0)))
#define ENTER scanf

int main()
{
    double weight, height;

    printf("Enter your weight(kg): ");
    ENTER("%lf", &weight);
    printf("Enter your height(m): ");
    ENTER("%lf", &height);

    double bmi = MACRO(weight, height);

    printf("Your BMI: %.2lf\n", bmi);

        if (bmi < 18.5) {
            printf("Underweight\n");
        } else if (bmi >= 18.5 && bmi < 25) {
            printf("Normal body weight\n");
        } else {
            printf("Excess body weight\n");
        }

    printf("Time: %s\n", __TIME__);

    return 0;
}
