#include<stdio.h>

#include <stdio.h>

void updateArray(int arr[], int n) {
    // Temporary array to store updated values
    int temp[n];

    // Handle first element (it only has a next element)
    temp[0] = arr[0] * arr[1];

    // Handle last element (it only has a previous element)
    temp[n-1] = arr[n-2] * arr[n-1];

    // Handle elements from index 1 to n-2 (they have both previous and next elements)
    for (int i = 1; i < n-1; i++) {
        temp[i] = arr[i-1] * arr[i+1];
    }

    // Copy the updated values back to the original array
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int n;

    // Input array size
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Input array elements
    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Update the array elements
    updateArray(arr, n);

    // Output the updated array
    printf("Updated array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

