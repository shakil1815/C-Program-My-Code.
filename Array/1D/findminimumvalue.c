#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max = INT_MAX; // সর্বোচ্চ possible value দিয়ে শুরু
    for (int i = 0; i < n; i++)
    {
        if (max > arr[i]) // সঠিক condition
        {
            max = arr[i];
        }
    }
    printf("The Minimum: %d", max);
    return 0;
}
