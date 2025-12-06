#include<stdio.h>
void math(int a,int b,int *sum,int *sub,int *mul,int *div){
    *sum=a+b;
    *sub=a-b;
    *mul=a*b;
    *div=a/b;
}
int main(){
    int a,b,sum,sub,mul,div;
    printf("Enter the a & b:");
    scanf("%d %d",&a,&b);
    math(a,b,&sum,&sub,&mul,&div);
    printf("sum=%d\n", sum);
    printf("sub=%d\n", sub);
    printf("mul=%d\n", mul);
    printf("div=%d\n",div);
    return 0;
}
/*
Pointers in Function Call
1. Call by Value
 We pass value of variable as argument.
 (আমরা ভেরিয়েবলের মান বা Value আর্গুমেন্ট হিসেবে পাঠাই)
2. Call by Reference
 We pass address of variable as argument.
  (আমরা ভেরিয়েবলের মেমোরি অ্যাড্রেস বা Address আর্গুমেন্ট হিসেবে পাঠাই)
*/