#include <stdio.h>
int findSmallestMissingPositive(int arr[], int size) {
    int found[size + 1]; // Step 1: Create an auxiliary array
    for (int i = 0; i <= size; i++) {
        found[i] = 0; // Step 2: Initialize all elements to 0
    }
    // Step 3: Mark the numbers present in the original array
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0 && arr[i] <= size) { 
            found[arr[i]] = 1; // Mark the presence of the number
        }
    }
    // Step 4: Find the first missing positive number
    for (int i = 1; i <= size; i++) {
        if (found[i] == 0) { // If not marked, return as missing
            return i;
        }
    }
    return size + 1; // Step 5: If all numbers are present, return the next number
}
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int missing = findSmallestMissingPositive(arr, size);
    printf("%d\n", missing);
    return 0;
}
