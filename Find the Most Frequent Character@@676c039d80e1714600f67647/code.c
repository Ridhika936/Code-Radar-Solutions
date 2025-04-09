#include <stdio.h>

int main() {
    char str[100];
    int count[256] = {0};  // For all ASCII characters
    int i, max = 0;
    char mostFreq;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Count frequency of each character
    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch != ' ' && ch != '\n') {
            count[(int)ch]++;
        }
    }

    // Find the character with max frequency
    for (i = 0; i < 256; i++) {
        if (count[i] > max) {
            max = count[i];
            mostFreq = (char)i;
        }
    }

    printf("%c", mostFreq);

    return 0;
}