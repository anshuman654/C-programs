#include <stdio.h>

int main() {
    int n;

    // Get the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input the array elements
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int smallestEven = -1;
    int nextClosest = -1;

    // Find the smallest even number
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            if (smallestEven == -1 || arr[i] < smallestEven) {
                smallestEven = arr[i];
            }
        }
    }

    // If no even number found
    if (smallestEven == -1) {
        printf("No even number found in the array.\n");
        return 0;
    }

    // Find the next closest number after the smallest even number
    for (int i = 0; i < n; i++) {
        if (arr[i] != smallestEven && arr[i] > smallestEven) {
            if (nextClosest == -1 || arr[i] < nextClosest) {
                nextClosest = arr[i];
            }
        }
    }

    // If no next closest number found
    if (nextClosest == -1) {
        printf("No number greater than the smallest even number found.\n");
    } else {
        printf("Smallest even number: %d\n", smallestEven);
        printf("Next closest number: %d\n", nextClosest);
    }

    return 0;
}
	
        

