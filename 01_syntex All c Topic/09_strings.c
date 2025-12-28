#include <stdio.h>
#include <string.h> // Required for string functions

int main() {
    // 1. String Declaration
    char firstName[20] = "Shakil";
    char fullName[50];
    
    // 2. String Input (with spaces)
    printf("Enter full name: ");
    // fgets is safer than gets. It reads the whole line including spaces.
    fgets(fullName, sizeof(fullName), stdin); 

    // 3. String Output
    printf("First Name: %s\n", firstName);
    printf("Full Name: %s", fullName); // fgets includes a newline automatically

    // 4. Common String Functions
    // Length
    int len = strlen(firstName);
    printf("Length of First Name: %d\n", len);

    // Copy (fullName = firstName)
    char copyStr[20];
    strcpy(copyStr, firstName); 
    printf("Copied String: %s\n", copyStr);

    // Concatenate (Join two strings)
    strcat(firstName, " Ahmed");
    printf("Concatenated: %s\n", firstName);

    // Compare (returns 0 if same)
    if(strcmp(firstName, "Shakil Ahmed") == 0) {
        printf("Strings match!\n");
    }

    return 0;
}