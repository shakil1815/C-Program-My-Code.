#include <stdio.h>
int main()
{  int n;
 printf("Enter the number: ");
    scanf("%d", &n);
    for(int i = 1; i <= 10; i++){
        printf("%d\n", n * i);
    }
    return 0;
    }
    /*
        //❓ Print reverse of the table for a number n:
        #include <stdio.h>
        int main() {
        int i, n;
        printf("Enter the number: ");
        scanf("%d", &n);
        for(i = 10; i >= 1; i--) {
            printf("%d\n", n * i);
        }
        return 0;
    }
    */
