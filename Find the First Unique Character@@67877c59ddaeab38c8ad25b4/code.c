#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i, j, count;
    scanf(" %[^\n]", str);  // Read line with spaces

    int len = strlen(str);
    for (i = 0; i < len; i++) {
        count = 0;

        // Skip spaces if you don't want to consider them
        if (str[i] == ' ')
            continue;

        for (j = 0; j < len; j++) {
            if (str[i] == str[j] && i != j) {
                count++;
                break;
            }
        }

        if (count == 0) {
            printf("%c\n", str[i]);
            return 0;
        }
    }

    printf("-");
    return 0;
}
