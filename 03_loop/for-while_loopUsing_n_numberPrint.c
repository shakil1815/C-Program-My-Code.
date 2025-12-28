#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter the number: ");
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}
/*
#include <stdio.h>
int main()
{
    int i = 0, n;
    printf("Enter the number: ");
    scanf("%d", &n);
    while(i <= n) {
        printf("%d\n", i);
        i++;
    }
    return 0;
}
*/