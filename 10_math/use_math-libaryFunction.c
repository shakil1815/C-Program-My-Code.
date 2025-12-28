//Using Library Function Pow() To Calculate Square
#include <stdio.h>
#include <math.h>
    int main()
{
    double num, square;
    printf("Enter a number: ");
    scanf("%lf", &num);
    square = pow(num, 2);
    printf("Square of %.0lf is :%.2lf", num, square);
    return 0;
}
