#include<stdio.h>
#include<string.h>

int main(void) {
    FILE* fptr1;
    FILE* fptr2;
    char ch;

    // Open the source file for reading
    fptr1 = fopen("t.txt", "r");
    if (fptr1 == NULL) {
        printf("Error opening the source file\n");
        return 1;
    }

    // Open the destination file for writing
    fptr2 = fopen("text.txt", "w");
    if (fptr2 == NULL) {
        printf("Error opening the destination file\n");
        fclose(fptr1);
        return 1;
    }

    // Read from the source file and write to the destination file
    while ((ch = fgetc(fptr1)) != EOF) {
        fputc(ch, fptr2);
    }

    // Close both files after the operation
    fclose(fptr1);
    fclose(fptr2);

    printf("The text has been copied from 't.txt' to 'text.txt'\n");

    return 0;
}

