#include<stdio.h>
int main(){
    int num[5];
    int i;
    for(i=0;i<5;i++)
    {
        scanf("%d",&num[i]);
    }
    int sum=0;
    for(i=0;i<5;i++)
    {
        sum=sum+num[i];
    }
    printf("The Sum is:%d\n",sum);
    return 0;
}