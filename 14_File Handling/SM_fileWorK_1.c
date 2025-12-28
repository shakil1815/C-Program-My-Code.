#include <stdio.h>
int main()
{
    int a, b;
    printf("enter element:");
    scanf("%d %d", &a, &b);
    int sum = a + b;
    FILE *fp;
    fp = fopen("SM_fileWorK_1.txt", "w");
    fprintf(fp, "sum of %d and %d=%d\n", a, b, sum);
    fclose(fp);
    return 0;
}
