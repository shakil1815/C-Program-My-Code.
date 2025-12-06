#include <stdio.h>
int main() {
    int i,j,r1,c1,r2,c2;
    printf("enter first matrix row and col:");
    scanf("%d %d",&r1,&c1);
    int mat1[r1][c1];
    printf("enter second matrix row and col:");
    scanf("%d %d", &r2, &c2);
    int mat2[r2][c2];
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            printf("enter mat1[%d][%d]:",i,j);
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("\n");
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("enter mat2[%d][%d]:", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }
    printf("\nThe First Matrix:\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("%d ",mat1[i][j]);
        }
         printf("\n");
    }
    printf("\nThe second Matrix:\n");
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("%d ", mat2[i][j]);
        }
        printf("\n");
    }
    return 0;
}