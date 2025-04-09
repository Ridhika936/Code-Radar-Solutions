#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i, j, found;
    scanf(" %[^\n]", str);  // Read full line with spaces

    int len = strlen(str);

    for (i = 0; i < len; i++) {
        found = 0;

        // Compare str[i] with every other character
        for (j = 0; j < len; j++) {
            if (str[i] == str[j] && i != j) {
                found = 1;  // It's repeated
                break;
            }
        }

        if (found == 0) {
            printf("%c\n", str[i]);
            return 0;
        }
    }

    printf("-");
    return 0;
}
