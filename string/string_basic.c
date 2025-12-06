// string is character array
/*
decleration:
1. char ar[]={'s','h','a','K','i','l','\0'};
2. char ar[]={"shaKil"};
*/


//1.1- print ascii value:
#include <stdio.h>
int main() {
    char a='a';
    printf("%d",a);

    return 0;
}


/*
//1.2- alternative covert in integers:
#include <stdio.h>
int main()
{
    char a = 'A';
    int x = (int)a;
    printf("%d", x);
    return 0;
}
    */

    /* 2- same ar[i]:
    ar[i]=i[ar]=*(ar+i]=*(i+ar]
    */

    /* string input and output :
    char str[5];
       intput:
           gets(str); (best way)
        or,scanf("%s"str) (evabe sudu eKta word output ey show Korbe)
           scanf("%[^\n]s",str); (sob word output ey show dibe )
        output:
            puts(str);
            //puts automatically eKta bacKslash \n diye dey
    */

