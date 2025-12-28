#include <stdio.h>

int main() {
    // Syntax: type variable_name = value;
    int id = 101;            // Integer (%d)
    float gpa = 3.75;        // Float (%f)
    double pi = 3.141592;    // Double (%lf)
    char grade = 'A';        // Character (%c)
    
    printf("ID: %d, GPA: %.2f\n", id, gpa);
    return 0;
}