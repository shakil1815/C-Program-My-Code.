#include <stdio.h>
int main()
{
    int ar[] = {10, 20, 30, 40, 50};
    int *ptr;
    ptr = &ar[0];
    printf("Array elements using pointer:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *ptr);
        ptr++;
    }
        return 0;
}
