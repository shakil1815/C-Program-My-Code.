#include <stdio.h>
int main() {
    char ar[] = {'s', 'h', 'a', 'K', 'i', 'l', '\0'};
    for(int i=0;ar[i]!='\0';i++){
        printf("%c",ar[i]);
    }
    return 0;
}