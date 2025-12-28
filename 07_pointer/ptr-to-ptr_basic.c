/*
pointer to pointer is a variable that stores momory address of another pointer
syntex:
int **pptr /char** pptr etc.
*/
#include <stdio.h>
int main()
{
    int i = 10;
    int *ptr = &i;
    int **pptr = &ptr;
    printf("%d\n", **pptr);
    return 0;
}