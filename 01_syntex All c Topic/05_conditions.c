#include <stdio.h>

int main() {
    int num = 2;

    // If-Else
    if (num > 0) {
        printf("Positive\n");
    } else {
        printf("Negative or Zero\n");
    }

    // Switch Case
    switch (num) {
        case 1: printf("One\n"); break;
        case 2: printf("Two\n"); break;
        default: printf("Other\n");
    }
    return 0;
}