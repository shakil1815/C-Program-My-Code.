#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 8, 9, 10};
    int n = 8;
    int target = 7;

    int i = 0;
    int j = n - 1;

    while (i < j) {
        if (arr[i] + arr[j] == target) {
            printf("%d %d\n", arr[i], arr[j]);
            break;
        } else if (arr[i] + arr[j] > target) {
            j--;
        } else {
            i++;
        }
    }

    return 0;
}
