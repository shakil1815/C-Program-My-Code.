#include <stdio.h>
int main()
{
    int n;
    printf("Enter array size:");
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d Element:",i+1);
        scanf("%d", &ar[i]);
    }
    int product = 1;
    for (int i = 0; i < n; i++)
    {
        product = product * ar[i];
    }
    printf("the product is:%d", product);
    return 0;
}