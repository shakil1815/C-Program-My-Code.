#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int sum = 0;
    for (i = 1; i <= n; i++)
    {
        sum = sum + i; // sum += i
    }
    printf("Sum is %d\n", sum);
    return 0;
}
/*
//❓ Q11: Calculate the sum of all numbers between 5 to 50 (including 5 & 50)
#include <stdio.h>
int main() {
    int i;
    int sum = 0;
    for(i = 5; i <= 50; i++) {
        sum = sum + i;
    }
    printf("The sum of all numbers: %d\n", sum);
    return 0;
}
*/