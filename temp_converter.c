#include <stdio.h>

float celsiusToFahrenheit(float c);
float fahrenheitToCelsius(float f);

int main() {
    int choice;
    float value, result;

    printf("1 - Celsius to Fahrenheit\n");
    printf("2 - Fahrenheit to Celsius\n");
    printf("Choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter Celsius value: ");
            scanf("%f", &value);
            result = celsiusToFahrenheit(value);
            printf("%.1f C = %.1f F\n", value, result);
            break;
        case 2:
            printf("Enter Fahrenheit value: ");
            scanf("%f", &value);
            result = fahrenheitToCelsius(value);
            printf("%.1f F = %.1f C\n", value, result);
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}

float celsiusToFahrenheit(float c) {
    return c * 9 / 5 + 32;
}

float fahrenheitToCelsius(float f) {
    return (f - 32) * 5 / 9;
}
