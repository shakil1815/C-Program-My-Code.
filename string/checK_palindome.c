#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], rev[100];

    printf("Enter a string: ");
    gets(str); // Only for practice (unsafe), use fgets in real code

    // Copy original string into rev
    strcpy(rev, str);

    // Reverse rev string
    strrev(rev);

    // Compare original and reversed
    if (strcmp(str, rev) == 0)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}
