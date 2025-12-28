#include <stdio.h>
void printhw(int count);
int main()
{
    printhw(5);
    return 0;
}
// recurtive function
void printhw(int count)
{
    if (count == 0)
    {
        return;
    }
    printf("Hello world!\n");
    printhw(count - 1);
}
