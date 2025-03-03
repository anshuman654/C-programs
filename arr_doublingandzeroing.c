#include<stdio.h>

void rearrangeArray(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        if(arr[i] == arr[i + 1]) {  // Use == for comparison
            arr[i] *= 2;  // Double the value of arr[i]
            arr[i + 1] = 0;  // Set arr[i+1] to zero
        }
    }

    int nonZeroIndex = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] != 0) {  // Move non-zero elements forward
            arr[nonZeroIndex++] = arr[i];
        }
    }

    for(int i = nonZeroIndex; i < n; i++) {  // Fill the remaining positions with zeroes
        arr[i] = 0;
    }

    // Correctly print newline
    printf("\n");
}

void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);  // Print the array elements
    }
    printf("\n");
}

int main() {
    int arr[100];
    int n = 0;

    printf("Enter the total number of array elements: ");
    scanf("%d", &n);  // Corrected: use &n to store the value

    printf("Enter the elements of the array: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Corrected: use &arr[i] to input values
    }

    rearrangeArray(arr, n);  // Call rearrangeArray correctly
    printf("Displaying the modified array: ");
    printArray(arr, n);  // Call printArray correctly

    return 0;
}

