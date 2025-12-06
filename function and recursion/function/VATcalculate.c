#include <stdio.h>
void calculateprice(float value);
int main()
{
    float value;
    printf("Enter the value: ");
    scanf("%f", &value);
    calculateprice(value);
    return 0;
}
void calculateprice(float value)
{
    value = value + (value * 0.15);
    printf("Final price (with 15%% VAT) is: %.2f", value);
}
