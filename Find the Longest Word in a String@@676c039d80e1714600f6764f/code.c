#include <stdio.h>
#include <string.h>

int main() {
    char str[200], word[50], longest[50];
    int i = 0, j = 0, maxLen = 0;
    scanf(" %[^\n]", str);  // Read full line with spaces

    while (1) {
        // If character is not space or end, collect into word[]
        if (str[i] != ' ' && str[i] != '\0') {
            word[j++] = str[i];
        } else {
            word[j] = '\0';  // End current word
            if (j > maxLen) {
                maxLen = j;
                strcpy(longest, word);
            }
            j = 0;  // Reset for next word
        }

        // If end of string, break
        if (str[i] == '\0')
            break;
        
        i++;
    }

    printf("%s\n", longest);
    return 0;
}
