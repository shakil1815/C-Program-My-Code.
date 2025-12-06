#include <stdio.h>
int main()
{
    int number, result;
    printf("Enter the number: ");
    scanf("%d", &number);
    result = number % 2;
    if (result == 0)
    {
        printf("The number is even number\n");
    }
    else
    {
        printf("The number is odd number\n");
    }
    return 0;
}
