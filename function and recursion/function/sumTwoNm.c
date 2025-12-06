#include <stdio.h>
// Function prototype
int sum(int x, int y)
{
    return x + y;
}

int main()
{
    int a, b, result;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    result = sum(a, b); // call the function
    printf("The sum is: %d\n", result);

    return 0;
}
// Function definition
