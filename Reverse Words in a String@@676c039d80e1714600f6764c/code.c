#include <stdio.h>
#include <string.h>

int main() {
    char str[200];

    fgets(str, sizeof(str), stdin);

    int i = 0, start;

    while (str[i] != '\0') {
        // Skip spaces
        while (str[i] == ' ' && str[i] != '\0') {
            i++;
        }

        // Start of the word
        start = i;

        // Move to end of the word
        while (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            i++;
        }

        // Now reverse the word from str[start] to str[i-1]
        int end = i - 1;
        while (start < end) {
            char temp = str[start];
            str[start] = str[end];
            str[end] = temp;
            start++;
            end--;
        }
    }

    printf("%s", str);
    return 0;
}
