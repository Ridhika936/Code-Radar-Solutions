#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    fgets(str, sizeof(str), stdin);  // Read string with spaces

    int i = 0, len = strlen(str);
    int minLen = 1000, wordLen = 0;
    int minStart = 0, wordStart = 0;

    while (i <= len) {
        if (str[i] != ' ' && str[i] != '\n' && str[i] != '\0') {
            if (wordLen == 0) wordStart = i;  // Start of a new word
            wordLen++;
        } else {
            if (wordLen > 0 && wordLen < minLen) {
                minLen = wordLen;
                minStart = wordStart;
            }
            wordLen = 0;
        }
        i++;
    }


    for (i = minStart; i < minStart + minLen; i++) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}
