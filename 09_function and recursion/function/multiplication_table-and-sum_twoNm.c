#include <stdio.h>
int sum(int a, int b);
void printtable(int n);
int main()
{
    int n, a, b;
    printf("Enter number: ");
    scanf("%d", &n);
    printtable(n);
    printf("Enter the numbers a & b: ");
    scanf("%d %d", &a, &b);
    int result = sum(a, b);
    printf("Sum = %d\n", result);
    return 0;
}
int sum(int x, int y)
{
    return x + y;
}
void printtable(int n)
{ 
    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n", n * i);
    }
}
