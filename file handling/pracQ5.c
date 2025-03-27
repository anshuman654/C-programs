#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void toUpperCase(char buff[]) {
    for (int i = 0; buff[i] != '\0'; i++) { // Loop until the null terminator
        if (buff[i] >= 'a' && buff[i] <= 'z') { // Corrected condition to include 'a' and 'z'
            buff[i] -= 32; // Convert to uppercase
        }
    }
}

int main() {
    FILE *f1, *f2;

    f1 = fopen("file1", "r");
    if (f1 == NULL) {
        perror("Error opening file1");
        return EXIT_FAILURE;
    }

    f2 = fopen("newfile", "w");
    if (f2 == NULL) {
        perror("Error opening newfile");
        fclose(f1); // Close f1 before exiting
        return EXIT_FAILURE;
    }

    char buff[100];

    // Read from f1 and write to f2
    while (fscanf(f1, "%99s", buff) == 1) { // Read a string from f1
        toUpperCase(buff); // Convert to uppercase
        fprintf(f2, "%s\n", buff); // Write to f2 with a newline
    }

    fclose(f1); // Close the input file
    fclose(f2); // Close the output file

    return EXIT_SUCCESS;
}
