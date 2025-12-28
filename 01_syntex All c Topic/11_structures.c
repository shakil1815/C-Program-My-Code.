#include <stdio.h>
#include <string.h>

// Define Structure
struct Student {
    int id;
    char name[50];
};

int main() {
    struct Student s1;
    
    s1.id = 1;
    strcpy(s1.name, "Shakil"); // Assign string
    
    printf("Student: %s (ID: %d)\n", s1.name, s1.id);
    return 0;
}