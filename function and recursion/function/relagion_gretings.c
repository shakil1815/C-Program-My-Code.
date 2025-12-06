/* write a function that prints namaste if user 
is Indian & assalamualikum if the user is bangladesi .*/
#include <stdio.h>
void salam();
void namaste();
int main()
{
    char ch;
    printf("enter s for muslim & n for hindu:");
    scanf("%c", &ch);
    if (ch == 's')
    {
        salam();
    }
    else
    {
        namaste();
    }
    return 0;
}
void salam()
{
    printf("assalamualikum");
}
void namaste()
{
    printf("namaste");
}
