#include <stdio.h>

int main() {
    FILE *fptr;
    
    // Create and open file for writing
    fptr = fopen("test.txt", "w");
    
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    fprintf(fptr, "This is a text file.\n");
    fclose(fptr); // Close file
    
    printf("File written successfully.\n");
    return 0;
}