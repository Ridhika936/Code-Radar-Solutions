#include <stdio.h>

// Function to check if an array is palindromic
int isPalindromicArray(int arr[], int size) {
    int left = 0, right = size - 1; // Step 1: Initialize two pointers

    while (left < right) { // Step 2: Loop until pointers meet
        if (arr[left] != arr[right]) { // Step 3: Compare elements
            return 0; // Not a palindrome, return false
        }
        left++;  // Move left pointer forward
        right--; // Move right pointer backward
    }
    return 1; // If all elements match, return true
}

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    if (isPalindromicArray(arr, size)) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}
