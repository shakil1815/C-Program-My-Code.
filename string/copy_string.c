//using pointer:
#include <stdio.h>
int main()
{
    char *s1 = "hello";
    char *s2 ;
    s2= s1; // উভয় pointer একই string নির্দেশ করবে
    printf("%s\n", s1);
    printf("%s\n", s2);
    return 0;
}
/*
//using libaray function:
#include <stdio.h>
int main() {
    char s1[100] = "hello";
    char s2[100];
    strcpy(s2, s1);  // string copy
    printf("%s\n", s1);
    printf("%s\n", s2);
    return 0;
}

*/