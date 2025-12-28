#include <stdio.h>

int main() {
    int val = 100;
    int *ptr;    // Declare pointer
    
    ptr = &val;  // Store address of val
    
    printf("Address: %p\n", ptr);
    printf("Value (Dereference): %d\n", *ptr);
    
    return 0;
}