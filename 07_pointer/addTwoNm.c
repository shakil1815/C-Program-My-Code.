#include<stdio.h>
int main(){
    int x=10,y=25,sum;
    int *a,*b;
    a=&x;
    b=&y; 
    sum=*a + *b;
    printf("The Sum is:%d",sum);
    return 0;
}
