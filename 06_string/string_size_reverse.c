#include <stdio.h>
int main()
{
    char str[34];
    printf("Enter a string: ");
    scanf("%s", str);
    int size = 0, k = 0;
    while(str[k] != '\0') {
        size++;
        k++;
    }
    printf("The size is: %d\n", size);
    int i, j;
    char temp;
    for(i = 0, j = size - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    printf("Reversed string: %s\n", str);
    return 0;
}
