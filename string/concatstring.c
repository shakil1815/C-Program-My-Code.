#include<stdio.h>
int main()
{
  char str1[20];
  char str2[20];
  char str3[20];
  printf("enter first string:");
  gets(str1);
  printf("enter second string:");
  gets(str2);
  int i,j;
  for(i=0;str1[i]!='\0';i++){
    str3[i]=str1[i];
  }
  for(j=0;str2[j]!='\0';j++){
    str3[i+j]=str2[j];
  }
  str3[i+j]='\0';
  puts(str3);
  return 0;
}

