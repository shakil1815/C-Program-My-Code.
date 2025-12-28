#include <stdio.h>
int main()
{
    int age;
    printf("enter the age:");
    scanf("%d", &age);
    if (age < 12)
    {
        printf("child");
    }
    else if (age < 18)
    {
        printf("teenagers");
    }
    else
    {
        printf("adult");
    }
    return 0;
}
