#include <stdio.h>
#include <string.h>

int minimum(char* str[], int n, char* word1, char* word2) {
    int d1 = -1, d2 = -1; // Initialize to -1 to indicate not found
    for (int i = 0; i < n; i++) {
        if (strcmp(str[i], word1) == 0) {
            d1 = i;
        } else if (strcmp(str[i], word2) == 0) {
            d2 = i;
        }
    }
    
    if (d1 != -1 && d2 != -1) {
        return abs(d2 - d1); // Return the absolute difference
    }
    
    return -1; // Return -1 if either word is not found
}

int main() {
    char* str[] = { "the", "quick", "brown", "fox", "quick" };
    int n = sizeof(str) / sizeof(str[0]);
    char word1[] = "the";
    char word2[] = "quick";
    int result = minimum(str, n, word1, word2);
    
    printf("Distance: %d\n", result);
    
    return 0;
}
