#include <stdio.h>
        int main()
        {
            int n,*ptr,i,sum;
            sum = 0;
            printf("How many numbers do you want to add? : ");
            scanf("%d", &n);
            printf(" Enter %d numbers \n", n);
            for (i = 0; i < n; i++)
            {
                scanf("%d", ptr+i);
                sum = sum + *(ptr+i);
            }
            printf("The total sum is: %d\n", sum);
            return 0;
        }
        /*
        for(i=0;i<n;i++)
        {
           printf("%d",*(p+i));
        }
        return 0;
        }
        */