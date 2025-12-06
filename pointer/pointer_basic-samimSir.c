#include<stdio.h>
int main()
{
  int x,y;
  int *ptr;
  x=10;
  ptr=&x;
  y=*ptr;
  printf("value 0f x is:%d\n",x);
  printf("%d is stored at address %u\n",x,&x);
  printf("%d is stored at address %u\n",*&x,&x);
  printf("%d is stored at address %u\n",*ptr,ptr);
  printf("%d is stored at address %u\n",ptr,&ptr);
  printf("%d is stored at address %u\n",y,&y);
  *ptr=25;
  printf("now x is %d\n",x);
  return 0;
}
