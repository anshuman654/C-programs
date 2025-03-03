#include <stdio.h>

#define ROWS 3
#define COLS 2

int main() {
    int matrix[ROWS][COLS] = {
        {1, 2},
        {3, 4},
        {5, 6}
    };

    int transpose[COLS][ROWS];

    // Perform the transpose
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Print the transposed matrix (row to column)
    printf("Transposed Matrix (Row to Column):\n");
    for (int i = 0; i < COLS; i++) {
        for (int j = 0; j < ROWS; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}

