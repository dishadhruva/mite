#include <stdio.h>

// Function prototype
float convertTemperature(float temp, int choice);

int main() {
    float temperature;
    int choice;
    
    printf("Enter Temperature: ");
    scanf("%f", &temperature);

    printf("Choose Conversion:\n");
    printf("1. Celsius to Fahrenheit\n 2. Fahrenheit to Celsius\n3. Celsius to Kelvin\nEnter Choice: ");
    scanf("%d", &choice);
    
    float result = convertTemperature(temperature, choice);
    switch (choice) {
        case 1:
            printf("Temperature in Fahrenheit: %.2f\n", result);
            break;
        case 2:
            printf("Temperature in Celsius: %.2f\n", result);
            break;
        case 3:
            printf("Temperature in Kelvin: %.2f\n", result);
            break;
        default:
            printf("Invalid choice!\n");
            break;
    }
    return 0;
}

float convertTemperature(float temp, int choice) {
    switch (choice) {
        case 1: 
            return (temp * 9.0 / 5.0) + 32.0;
        case 2: 
            return (temp - 32.0) * 5.0 / 9.0;
        case 3: 
            return temp + 273.15;
        default:
            return 0.0; 
    }
}
