#include <stdio.h>

int main() {
    // For Loop (Fixed iterations)
    for (int i = 1; i <= 5; i++) {
        printf("Count: %d\n", i);
    }

    // While Loop (Condition based)
    int j = 1;
    while (j <= 5) {
        printf("While: %d\n", j);
        j++;
    }
    return 0;
}