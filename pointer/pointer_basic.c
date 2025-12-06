// & ->this symbol is used to get the address of the variable.
// & ->this symbol is used to get the value of the variable that the pointer is pointing to.
#include <stdio.h>
int main(){
    system("cls");
    int x=5;
    int y=10;
    int *p;
    p=&x;
    printf("value of x=%d\n",x);
    printf("address of x=%d\n", &x);
    printf("value of p=%d\n", p);
    printf("constent of p=%d\n", *p);
    printf("value of p variable=%d\n", &p);
    return 0;
}
/*
int x;
    int *ptr;

    ptr = &x;
    *ptr = 0; // x = 0

    printf("x = %d\n", x); // 0
    printf("*ptr = %d\n", *ptr); // 0

    *ptr += 5; // x = 5
    printf("x = %d\n", x); // 5
    printf("*ptr = %d\n", *ptr); // 5

    (*ptr)++;
    printf("x = %d\n", x); // 6
    printf("*ptr = %d\n", *ptr); // 6
    return 0;
}
    */
