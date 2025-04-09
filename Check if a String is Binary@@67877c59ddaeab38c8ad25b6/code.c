#include <stdio.h>

int main() {
    char str[100];
    int i, isBinary = 1;
    scanf("%s", str);  // Read the string

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != '0' && str[i] != '1') {
            isBinary = 0;
            break;
        }
    }

    if (isBinary) {
        printf("Yes");
    } else {
        printf("No");
    }

    return 0;
}
