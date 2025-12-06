#include<stdio.h>
struct CxNum
{
    double real;
    double img;
};
int main()
{

struct CxNum a,b,mul;
    printf("Enter 1st complex num: ");
    scanf("%lf %lf",&a.real,&a.img);
    printf("Enter 2nd complex num: ");
    scanf("%lf %lf",&b.real,&b.img);
    mul.real=a.real*b.real- a.img*b.img;
    mul.img=a.real*b.img+a.img*b.real;
    printf("%.1lf+%.1lfi",mul.real,mul.img);
return 0;


}
