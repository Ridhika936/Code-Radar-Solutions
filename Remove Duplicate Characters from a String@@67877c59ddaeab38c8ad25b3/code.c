#include <stdio.h>
#include <string.h>

int main() {
    char str[200], result[200];
    int i, j, k = 0;
    int found;
    scanf(" %[^\n]", str);  // Read string with spaces

    for (i = 0; str[i] != '\0'; i++) {
        found = 0;

        // Check if str[i] is already in result
        for (j = 0; j < k; j++) {
            if (str[i] == result[j]) {
                found = 1;  // Duplicate found
                break;
            }
        }

        // If not found, add it to result
        if (!found) {
            result[k++] = str[i];
        }
    }

    result[k] = '\0';  // Null terminate the result

    printf("%s\n", result);

    return 0;
}
