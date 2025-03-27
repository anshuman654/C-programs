#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char name[100];
    int age;
} student;

void swap(student *a, student *b);
void bublesort(student stu[], int n);

void bublesort(student stu[], int n) {
    for (int i = 0; i < n - 1; i++) { // Outer loop should go to n-1
        for (int j = 0; j < n - i - 1; j++) { // Inner loop should go to n-i-1
            if (strcmp(stu[j].name, stu[j + 1].name) > 0) {
                swap(&stu[j], &stu[j + 1]);
            }
        }
    }
}

void swap(student *a, student *b) {
    student temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    FILE *st;
    student stu[100];
    int n = 0;

    st = fopen("file1", "r");
    if (st == NULL) { // Check if the file opened successfully
        perror("Unable to open file");
        return 1;
    }

    while (fscanf(st, "%s %d", stu[n].name, &stu[n].age) != EOF) {
        n++;
        if (n >= 100) {
            printf("Limit reached\n");
            break; // Break out of the loop if limit is reached
        }
    }

    fclose(st);

    bublesort(stu, n);

    for (int i = 0; i < n; i++) {
        printf("Name: %s, Age: %d\n", stu[i].name, stu[i].age); // Added newline for better formatting
    }

    return 0;
}
