#include <stdio.h>

// Function Prototype
int add(int a, int b);

int main() {
    int sum = add(5, 10); // Function Call
    printf("Sum: %d\n", sum);
    return 0;
}

// Function Definition
int add(int a, int b) {
    return a + b;
}