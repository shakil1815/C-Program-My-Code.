#include <stdio.h>
int main()
{
    // ⭐ For loop
    //for(initialization,conditon,updation)
    for (int i = 1; i <= 100; i++)
    {
        printf("%d\n", i);
    }
    // ⭐ While loop
    int i = 1; // initialization
    while (i <= 100) // condition
    {
        printf("%d\n", i);
        i++; //updation
    }
    // ⭐ Do-While loop
    i = 1; //initialization
    do
    {
        printf("%d\n", i);
        i++; //updation
    } while (i <= 100); //condition

    return 0;
}
