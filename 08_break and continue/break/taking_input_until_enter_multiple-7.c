#include <stdio.h>
int main()
{
    int n;
    do
    {
        printf("Enter a number: ");
        scanf("%d", &n);

        if (n % 7 == 0)
        {
            printf("%d\n", n);
            break; // exit loop if number is multiple of 7
        }
    } while (1);

    printf("End");
    return 0;
}
