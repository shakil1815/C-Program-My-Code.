#include <stdio.h>

int main() {
    // 1. Declaration and Initialization
    int marks[5] = {80, 85, 90, 75, 95};
    
    // 2. Modifying a value (Changing 80 to 82)
    marks[0] = 82;

    // 3. Looping through an array
    printf("Marks List:\n");
    for(int i = 0; i < 5; i++) {
        printf("Student %d: %d\n", i+1, marks[i]);
    }

    // 4. Multidimensional Array (2D Array - Matrix)
    int matrix[2][3] = {
        {1, 2, 3}, 
        {4, 5, 6}
    };
    printf("\nElement at row 1, col 2: %d\n", matrix[1][2]); // Output: 6

    return 0;
}