/*Write Functions To Calculate Area Of A Square, 
A Circle & A Rectangle :*/
#include <stdio.h>
    float calculate_square(float side);
float calculate_circle(float radius);
float calculate_rectangle(float a, float b);
int main()
{
    float side, radius, a, b;
    printf("Enter the side of square: ");
    scanf("%f", &side);
    printf("Area of square = %.2f\n", calculate_square(side));

    printf("Enter the radius of circle: ");
    scanf("%f", &radius);
    printf("Area of circle = %.2f\n", calculate_circle(radius));

    printf("Enter the length of rectangle ");
    scanf("%f", &a);
    printf("Enter the breadth of rectangle: ");
    scanf("%f", &b);
    printf("Area of rectangle = %.2f\n", calculate_rectangle(a, b));
    return 0;
}
float calculate_square(float side)
{
    return side * side;
}
float calculate_circle(float radius)
{
    return 3.14 * radius * radius;
}

float calculate_rectangle(float a, float b)
{
    return a * b;
}
