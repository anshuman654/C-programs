#include<stdio.h>
#include<stdlib.h>

int* removeDuplicates(int arr[], int n, int* newLength);

int main() {
    int arr[] = {0, 0, 1, 2, 2, 3, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int newLength;

    
    int* result = removeDuplicates(arr, n, &newLength);

    
    printf("New array: ");
    for (int i = 0; i < newLength; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    
    free(result);

    return 0;
}

int* removeDuplicates(int arr[], int n, int* newLength) {
    int* arrTwo = (int*)malloc(n * sizeof(int));  
    if (!arrTwo) {
        printf("Memory allocation failed!\n");
        exit(1);
    }

    int index = 0;
    *newLength = 0;  

    for(int i=0;i<n;i++){
         arrTwo[index++]=arr[i];
         while(arr[i]== arr[i+1]){
            i++;
        }
    }


    *newLength = index;  
    return arrTwo;
}

