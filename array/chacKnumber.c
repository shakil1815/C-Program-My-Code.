#include <stdio.h>
int main()
{
    int ar[7] = {44, 65, 31, 25, 85, 66, 12};
    for (int i = 0; i < 7; i++)
    {
        if (ar[i] < 35)
        {
            printf("%d -->", ar[i]);
            printf("%d \n", i);
        }
    }
    return 0;
}
