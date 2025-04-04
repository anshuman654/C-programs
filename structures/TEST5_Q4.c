#include <stdio.h>

#define MAX 100

struct Employee {
    int ID;
    char name[MAX];
    float salary;
};

int main() {
    struct Employee A[MAX];
    int n = 5, i = 0; // Initialize i to 0
    float sum = 0;

    FILE *ft = fopen("emp.txt", "r");

    if (ft == NULL) {
        printf("File is not getting opened\n");
        return 1; // Exit if the file cannot be opened
    }

    // Read employee data from the file
    while ((fscanf(ft, "%d %s %f", &A[i].ID, A[i].name, &A[i].salary) == 3) && (i < n)) {
        i++;
    }

    fclose(ft);

    // Calculate the sum of salaries
    for (int j = 0; j < i; j++) { // Use i instead of n to avoid accessing uninitialized data
        sum += A[j].salary;
    }

    // Calculate average as a float
    float average = (i > 0) ? (sum / i) : 0; // Avoid division by zero

    printf("Final average: %.2f\n", average); // Use %.2f for float output

    return 0;
}
