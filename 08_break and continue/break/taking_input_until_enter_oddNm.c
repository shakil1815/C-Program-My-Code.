#include <stdio.h>
int main()
{
    int num;
    do
    {
        printf("Enter a number: ");
        scanf("%d", &num);
    } while (num % 2 == 0); // loop continues while number is even

    printf("You entered an odd number: %d\n", num);
    return 0;
}
/*
//Alternative using while loop
#include <stdio.h>
int main() {
    int n;
    do {
        printf("Enter number: ");
        scanf("%d", &n);
        printf("%d\n", n);

        if(n % 2 != 0) {
            break; // exit loop if number is odd
        }
    } while(1);

    printf("Thank you");
    return 0;
}
*/