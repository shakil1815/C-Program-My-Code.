#include <stdio.h>

int main() {
    int a = 10, b = 3;
    
    // Arithmetic
    printf("Sum: %d\n", a + b);
    printf("Modulo: %d\n", a % b); // Remainder
    
    // Relational (1=True, 0=False)
    printf("Is Equal? %d\n", a == b);
    
    // Logical
    printf("AND: %d\n", (a > 5) && (b < 5));
    
    // Increment
    a++; 
    return 0;
}