#include<stdio.h>
struct complex{
    double real;
    double img;
  };
int main()
{
  struct complex a,b,sum;
  printf("enter a matrix real & img number:");
  scanf("%lf %lf",&a.real,&a.img);
  printf("enter b matrix real & img number:");

  scanf("%lf %lf",&b.real,&b.img);
  sum.real=a.real+b.real;
  sum.img=a.img+b.img;
  printf("%lf+%lfi\n",sum.real,sum.img);
  return 0;
}
