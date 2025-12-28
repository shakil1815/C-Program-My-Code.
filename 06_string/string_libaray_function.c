/*
1. strlen(); -->return the length of string
      strname(destination,source)
2. strcpy(char s2,char s1); -->copies the contents of string s2 to string s1
3. strcmp(char s1,char s2); -->compare the two string
4. strcpy(char s1,char s2,int len); -->copy substring of size len starting from s1 into s2
*/

/*
//strlen();
#include <stdio.h>
int main() {
    char str[20]="shaKil" ;
    int x=strlen(str);
    printf("%d",x);
    return 0;
}
    */

/*
//strcpy();
#include <stdio.h>
int main() {
char str1[20]="shaKil" ;
char str2[20];
strcpy(str2,str1);
printf("str2:%s",str2);
return 0;
}
*/

/*
//strcat();
#include <stdio.h>
int main() {
char str1[20]="shaKil" ;
char str2[20]="ahmed";
strcat(str1,str2);
printf("str2:%s",str1);
return 0;
}
*/

/*
//strcmp();
#include <stdio.h>
int main()
{
    char str1[20] = "shaKil";
    char str2[20]="ahmed";
    strcmp(str1, str2);
    int d=(int)strcmp;
    if(d==0){
        printf("are equal");
    } else{ 
        printf("not equal");
    }
    return 0;
}
    */

/*
//strrev();
#include <stdio.h>
int main()
{
    char str1[20] = "shaKil";
    strrev(str1);
    printf("str2:%s", str1);
    return 0;
}
*/