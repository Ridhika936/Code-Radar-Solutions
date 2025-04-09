#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, count;
    scanf(" %[^\n]", str);  // Takes full line including spaces

    int len = strlen(str);

    for (i = 0; i < len; i++) {
        count = 1;

        // Skip if already counted
        if (str[i] == '0')  
            continue;

        for (j = i + 1; j < len; j++) {
            if (str[i] == str[j]) {
                count++;
                str[j] = '0';  // Mark as counted
            }
        }

        if (str[i] != '0') {
            printf("%c: %d\n", str[i], count);
        }
    }

    return 0;
}
