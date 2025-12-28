#include <stdio.h>
int main()
{
    int ar[7] = {4, 6, 1, 2, 5, 7, 3};
    printf("the numbers are:");
    for (int i = 0; i < 7; i++)
    {
        if (i%2==0)
        {
            printf("%d ", ar[i]+10);
        }
        else if (i % 2 != 0)
        {
            printf("%d ", ar[i] + 2);
        }
    }
    return 0;
}