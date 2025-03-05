#include<stdio.h>

void rearrange(int arr[], int n) {
    int temp2[100];
    
    // Initialize the temp2 array with -1
    for (int i = 0; i < n; i++) {
        temp2[i] = -1;  // Set all positions to -1 initially
    }

    // Place elements in their correct positions
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0 && arr[i] < n) {  // Ensure the value is in range [0, n-1]
            temp2[arr[i]] = arr[i];  // Place arr[i] at the index arr[i]
        }
    }

    // Print the rearranged array
    for (int i = 0; i < n; i++) {
        printf("%d ", temp2[i]);
    }
    
}

int main() {
    int arr[100] = {1, 3, 5, 7, 9};  // Given array
    int n = sizeof(arr) / sizeof(arr[0]);  // Number of elements in the array

    printf("Rearranged form of array:\n");
    rearrange(arr, n);  // Call the rearrange function

    return 0;
}


