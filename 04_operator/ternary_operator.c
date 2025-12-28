#include <stdio.h>
int main()
{
    int age;
    printf("enter the age:");
    scanf("%d", &age);
    // Rules: Condition ? doSomething if TRUE : doSomething if FALSE;
    age > 18 ? printf("you are adult\n") : printf("you are not adult\n");
    return 0;
}
