#include <stdio.h>

float calculateFare(char travelClass);
float checkBaggage(char travelClass, float baggageWeight);
void printTicket(char travelClass, float baggageWeight, float baseFare, float excessFee);

int main() {
    char travelClass;
    float bagWeight, baseFare, excessFee;

    printf("Enter travel class (E-conomy / B-usiness): ");
    scanf("%c", &travelClass);
    printf("Enter baggage weight (kg): ");
    scanf("%f", &bagWeight);

    baseFare = calculateFare(travelClass);
    excessFee = checkBaggage(travelClass, bagWeight);
    printTicket(travelClass, bagWeight, baseFare, excessFee);

    return 0;
}

float calculateFare(char travelClass) {
    if (travelClass == 'E' || travelClass == 'e') {
        return 2500.00;
    } else if (travelClass == 'B' || travelClass == 'b') {
        return 6500.00;
    } else {
        return 0;
    }
}

float checkBaggage(char travelClass, float baggageWeight) {
    if (travelClass == 'E' || travelClass == 'e') {
        if (baggageWeight > 20.00) {
            return (baggageWeight - 20.00) * 150;
        } else {
            return 0;
        }
    } else if (travelClass == 'B' || travelClass == 'b') {
        if (baggageWeight > 40.00) {
            return (baggageWeight - 40.00) * 150;
        } else {
            return 0;
        }
    } else {
        return 0;
    }
}

void printTicket(char travelClass, float baggageWeight, float baseFare, float excessFee) {
    float totalFare = baseFare + excessFee;

    if (travelClass == 'E' || travelClass == 'e') {
        printf("----- BOARDING SUMMARY -----\n");
        printf("Travel Class: Economy\nBase Fare: PHP %.2f\nBaggage Weight: %.2f kg (Allowance: %.2f kg)\nExcess Baggage Fee: PHP %.2f\nTotal Fare: PHP %.2f\n-----------------------------\n",
               baseFare, baggageWeight, 20.00, excessFee, totalFare);
    } else if (travelClass == 'B' || travelClass == 'b') {
        printf("----- BOARDING SUMMARY -----\n");
        printf("Travel Class: Business\nBase Fare: PHP %.2f\nBaggage Weight: %.2f kg (Allowance: %.2f kg)\nExcess Baggage Fee: PHP %.2f\nTotal Fare: PHP %.2f\n-----------------------------\n",
               baseFare, baggageWeight, 40.00, excessFee, totalFare);
    } else {
        printf("Invalid Input!\n");
    }
}
