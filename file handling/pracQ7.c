#include <stdio.h>
#include <stdlib.h>
#include <conio.h> // For getch() function

#define WIDTH 80
#define HEIGHT 23
#define LINES_PER_PAGE (HEIGHT - 2) // 2 lines for the box border

void drawBox() {
    // Draw top border
    for (int i = 0; i < WIDTH; i++) {
        printf("-");
    }
    printf("\n");

    // Draw sides
    for (int i = 0; i < HEIGHT - 2; i++) {
        printf("|");
        for (int j = 1; j < WIDTH - 1; j++) {
            printf(" ");
        }
        printf("|\n");
    }

    // Draw bottom border
    for (int i = 0; i < WIDTH; i++) {
        printf("-");
    }
    printf("\n");
}

void displayPage(const char *filename, FILE *file, int pageNum) {
    char line[256];
    int lineCount = 0;

    // Display the file name and page number
    printf("| %s - Page %d", filename, pageNum);
    for (int i = 0; i < WIDTH - 2 - strlen(filename) - 10; i++) {
        printf(" ");
    }
    printf("|\n");

    // Read and display lines for the current page
    while (lineCount < LINES_PER_PAGE && fgets(line, sizeof(line), file)) {
        printf("| %s", line);
        lineCount++;
    }

    // Fill the remaining lines with spaces if the page is not full
    for (; lineCount < LINES_PER_PAGE; lineCount++) {
        printf("| \n");
    }

    // Draw the bottom border of the box
    for (int i = 0; i < WIDTH; i++) {
        printf("-");
    }
    printf("\n");

    // Prompt for next page
    printf("Press any key...\n");
}

int main() {
    const char *filename = "example.txt"; // Hard-coded filename
    FILE *file = fopen(filename, "r");
    if (!file) {
        perror("Error opening file");
        return 1;
    }

    int pageNum = 1;
    while (!feof(file)) {
        drawBox();
        displayPage(filename, file, pageNum);
        pageNum++;
        getch(); // Wait for user input
    }

    fclose(file);
    return 0;
}
