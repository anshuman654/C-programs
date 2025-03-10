#include<stdio.h>

int result(int arr[], int n, int k) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;  // Corrected mid calculation
        
        if (arr[mid] == k) {
            return mid;
        }
        
        // First half check
        if (arr[low] <= arr[mid]) {
            if (arr[low] <= k && arr[mid] >= k) {
                high = mid - 1;  // Fixed missing semicolon
            } else {
                low = mid + 1;
            }
        }
        // Second half check
        else {
            if (arr[mid] <= k && arr[high] >= k) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
    }
    return -1;  // Return -1 if the element is not found
}

int main() {
    int arr[] = {4, 5, 1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);  // Corrected size calculation
    int k = 2;  // Target element

    int index = result(arr, n, k);  // Correct function call and variable name

    if (index != -1) {
        printf("Element found at index: %d\n", index);
    } else {
        printf("Element not found.\n");
    }

    return 0;
}

