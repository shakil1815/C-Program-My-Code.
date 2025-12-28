#include <stdio.h>

int main() {
    int mark;
    printf("Enter the mark (0-100): ");
    scanf("%d", &mark);

    if (mark < 0 || mark > 100) {
        printf("Invalid mark!\n");
    } else {
        switch (mark / 10) {
            case 10:printf("Grade: A+\n");
                break;
            case 9: printf("Grade: A+\n");
                break;
            case 8: printf("Grade: A+\n");
                break;
            case 7: printf("Grade: A\n");
                break;
            case 6: printf("Grade: A-\n");
                break;
            case 5: printf("Grade: B\n");
                break;
            case 4: printf("Grade: C\n");
                break;
            case 3:
                if (mark >= 33) {
                    printf("Grade: D\n");
                } else {
                    printf("Grade: F\n");
                }
                break;
            default: printf("Grade: F\n");
        }
    }
    return 0;
}
