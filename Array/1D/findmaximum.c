#include <stdio.h>
#include<limits.h>
int main() {
    /*
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }   
    */
    int arr[7]={1,5,25,7,6,8};
    int min=INT_MIN;
    for(int i=0;i<7;i++)
    {
          if(min<arr[i])
      {
        min=arr[i];
      }
    }
    printf("The Maximum:%d",min);
    return 0;
}