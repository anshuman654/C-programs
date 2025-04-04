//Write a function char* substring(const char* str, int start, int length) that extracts a substring from a given string starting at a specified index and of a specified length. The function should return a new dynamically allocated string containing the substring. In the main function, prompt the user for a string, a starting index, and a length, and display the extracted substring. Ensure to free the allocated memory.


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* substring(const char* str, int start, int length);

int main() {
    char str[100];
    int start, length;

    printf("Enter the string: ");
    scanf("%s", str);

    int n = strlen(str);

    printf("Enter the start index: ");
    scanf("%d", &start);

    printf("Enter the length: ");
    scanf("%d", &length);

    // Check for valid start and length
    if (start < 0 || start >= n || length < 0 || start + length > n) {
        printf("Invalid start index or length.\n");
        return 1;
    }

    char* sptr = substring(str, start, length);

    if (sptr != NULL) {
        printf("Substring: %s\n", sptr);
        free(sptr); // Free the allocated memory
    }

    return 0;
}

char* substring(const char* str, int start, int length) {
    // Allocate memory for the substring
    char* strr = (char*)malloc((length + 1) * sizeof(char)); // +1 for null terminator

    if (strr == NULL) {
        printf("Memory is not allocated\n");
        return NULL; // Return NULL if memory allocation fails
    }

    int index = 0;
    for (int i = start; i < start + length; i++) {
        strr[index++] = str[i]; // Assign characters to the substring
    }
    strr[index] = '\0'; // Null-terminate the substring

    return strr;
}
