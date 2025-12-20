#include<stdio.h>
int main(){
    int ar[]={4,5,3,2,6,7,3,1};
    int n=8;
    printf("The unsorted array:");
     for(int i=0;i<n;i++){
        printf("%d ", ar[i]);
    }
    printf("\n");
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(ar[j] > ar[j+1]){
                int temp=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=temp;
            }
        }
    }
    printf("The sorted array  :");
    for(int i=0;i<n;i++){
        printf("%d ", ar[i]);
    }
    return 0;
}


//  more optimaize bubble sort code: using bool
  /*
#include<stdio.h>
#include <stdbool.h>
int main(){
    int ar[]={4,5,3,2,6,7,3,1};
    int n=8;
    printf("The unsorted array:");
     for(int i=0;i<n;i++){
        printf("%d ", ar[i]);
    }
    printf("\n");
    for(int i=0;i<n-1;i++){
        bool flag= true; // array is not sorted yet
        for(int j=0;j<n-i-1;j++){
            if(ar[j] > ar[j+1]){
                int temp=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=temp;
                flag =false;
            }
        }
        if(flag==true) break;;
    }
    printf("The sorted array:");
    for(int i=0;i<n;i++){
        printf("%d ", ar[i]);
    }
    return 0;
}
    */
