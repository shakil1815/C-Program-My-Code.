#include <stdio.h>
int main() {
    char str[200]="shaKil";
    char *ptr=str;
    int i;
    while(*ptr !='\0'){
       printf("%c",*ptr);
        ptr++;
        i++;
    }
    return 0;
}