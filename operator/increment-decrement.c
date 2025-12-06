#include <stdio.h>
int main()
{
    int i = 1;

    // ⭐ Pre-increment: increase first, then use
    printf("%d\n", ++i); // Output: 2
    printf("%d\n", i);   // Output: 2

    // ⭐ Post-increment: use first, then increase
    printf("%d\n", i++); // Output: 2
    printf("%d\n", i);   // Output: 3

    // ⭐ Pre-decrement: decrease first, then use
    printf("%d\n", --i); // Output: 2
    printf("%d\n", i);   // Output: 2

    // ⭐ Post-decrement: use first, then decrease
    printf("%d\n", i--); // Output: 2
    printf("%d\n", i);   // Output: 1

    return 0;
}
