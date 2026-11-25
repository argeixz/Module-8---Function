#include <stdio.h>

float calculateBMI(float weightKg, float heightM);
void categorizeBMI(float bmi);

int main() {
    float weight, height, BMI;

    printf("Enter your weight(kg): ");
    scanf("%f", &weight);
    printf("Enter your height(cm): ");
    scanf("%f", &height);

    height = height / 100; 

    BMI = calculateBMI(weight, height);
    printf("BMI = %.2f\n", BMI);

    categorizeBMI(BMI);

    return 0;
}

float calculateBMI(float weightKg, float heightM) {
    return weightKg / (heightM * heightM);
}

void categorizeBMI(float bmi) {
    if (bmi < 18.5) {
        printf("Category: Underweight\n");
    } else if (bmi < 25.0) {
        printf("Category: Normal\n");
    } else if (bmi < 30.0) {
        printf("Category: Overweight\n");
    } else {
        printf("Category: Obese\n");
    }
}
