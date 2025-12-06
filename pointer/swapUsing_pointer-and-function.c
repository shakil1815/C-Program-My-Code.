#include <stdio.h>
void swap(int *a, int *b);
int main()
{
    int num1 = 12;
    int num2 = 23;
    printf("Before swapping: %d %d\n", num1, num2);
    swap(&num1, &num2);
    printf("After swapping:  %d %d\n", num1, num2);
    return 0;
}
void swap(int *a, int *b)
{
    int temp;
    temp = *a; 
    *a = *b; 
    *b = temp; 
}
