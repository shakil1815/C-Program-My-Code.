#include <stdio.h>
// Function declarations
float convert_fahrenheit(float c);
float convert_celsius(float f);
int main()
{
    printf("Celsius to Fahrenheit: %.2f\n", convert_fahrenheit(25)); // 25°C -> Fahrenheit
    printf("Fahrenheit to Celsius: %.2f\n", convert_celsius(77));    // 77°F -> Celsius
    return 0;
}
// Celsius to Fahrenheit
float convert_fahrenheit(float c)
{
    float fahrenheit = (c * 9 / 5) + 32;
    return fahrenheit;
}
// Fahrenheit to Celsius
float convert_celsius(float f)
{
    float celsius = (f - 32) * 5 / 9;
    return celsius;
}

