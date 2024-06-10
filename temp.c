#include <stdio.h>

int main() 
{
    double temp, celsius, fahrenheit, kelvin;
    char unit;

    printf("Enter the temperature value: ");
    scanf("%lf", &temp);

    printf("Enter the unit (C for celsius/F for fahrenheit/K for kelvin): ");
    scanf(" %c", &unit);

    switch (unit) {
        case 'C':
            celsius = temp;
            fahrenheit = (temp * 9.0 / 5.0) + 32.0;
            kelvin = temp + 273.15;
            break;
        case 'F':
            celsius = (temp - 32.0) * 5.0 / 9.0;
            fahrenheit = temp;
            kelvin = celsius + 273.15;
            break;
        case 'K':
            celsius = temp - 273.15;
            fahrenheit = (temp - 273.15) * 9.0 / 5.0 + 32.0;
            kelvin = temp;
            break;
        default:
            printf("Invalid unit. Please enter C, F, or K.\n");
            return 1;
    }

    printf("%.2f degrees %c is equal to:\n", temp, unit);
    printf("%.2f degrees Celsius\n", celsius);
    printf("%.2f degrees Fahrenheit\n", fahrenheit);
    printf("%.2f degrees Kelvin\n", kelvin);

    return 0;
}