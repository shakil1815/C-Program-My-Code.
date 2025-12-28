#include<stdio.h>
int main(){
    int ar[]={2,4,5,3,7};
    int n=5;
    printf("The Unsorted array: ");
    for(int i=0; i<n; i++){
        printf("%d ",ar[i]);
    }
    printf("\n");
    for(int i=0; i<n; i++){
        int min=i;
        for(int j=i+1; j<n; j++){
            if(ar[j] < ar[min]){
                min=j;
            }
        }
        int temp=ar[i];
        ar[i]=ar[min];
        ar[min]=temp;
    }
    printf("The sorted array  : ");
    for(int i=0; i<n; i++){
        printf("%d ",ar[i]);
    }
    return 0;
}