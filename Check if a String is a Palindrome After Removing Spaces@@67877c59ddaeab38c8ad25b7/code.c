#include <stdio.h>
#include <string.h>

int main() {
    char str[200], cleaned[200];
    int i, j = 0, len, isPalindrome = 1;
    scanf(" %[^\n]", str);  // Read full line with spaces

    // Remove spaces
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            cleaned[j++] = str[i];
        }
    }
    cleaned[j] = '\0';  // End cleaned string

    // Check if cleaned string is palindrome
    len = strlen(cleaned);
    for (i = 0; i < len / 2; i++) {
        if (cleaned[i] != cleaned[len - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome) {
        printf("Yes");
    } else {
        printf("No");
    }

    return 0;
}
