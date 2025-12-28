#include<stdio.h>
int main(){
    int x=10,y=25,temp;
    int *a,*b;
    a=&x;
    b=&y; 
    temp=*a;
    *a=*b;
    *b=temp;
    printf("x=%d\n",x);
    printf("y=%d\n", y);
    return 0;
}