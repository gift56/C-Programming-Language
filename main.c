#include <stdio.h>
#include <string.h>

int main()
{
    // Temperature converter program

    char choice = '\0';
    float fahrenheit = 0.0f;
    float kelvin = 0.0f;
    float celsius = 0.0f;

    printf("Temperature Conversion Program\n");
    printf("C. Celsius to Kelvin\n");
    printf("K. Kelvin to Celsius\n");
    printf("F. Fahrenheit to Celsius\n");

    printf("Enter your choice (C, F, or K): ");
    scanf("%c", &choice);

    if (choice == 'C')
    {
        printf("Enter your temperature in Celsius: ");
        scanf("%f", &celsius);
        fahrenheit = (celsius * 9 / 5) + 32;
        printf("%.1f Celsius is equal to %.1f Fahrenheit\n", celsius, fahrenheit);
    }
    else if (choice == 'K')
    {
        printf("Enter your temperature in Kelvin: ");
        scanf("%f", &kelvin);
        celsius = kelvin - 273.15;
        printf("%.1f Kelvin is equal to %.1f Celsius\n", kelvin, celsius);
    }
    else if (choice == 'F')
    {
        printf("Enter your temperature in Fahrenheit: ");
        scanf("%f", &fahrenheit);
        celsius = (fahrenheit - 32) * 5 / 9;
        printf("%.1f Fahrenheit is equal to %.1f Celsius\n", fahrenheit, celsius);
    }
    else
    {
        printf("Invalid choice! Please select (C, K or F)\n");
    }

    return 0;
}