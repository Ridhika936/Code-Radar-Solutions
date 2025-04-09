#include <stdio.h>

int main() {
    char str[200];
    fgets(str, sizeof(str), stdin);

    int i = 0, j = 0;

    while (str[i] != '\0') {
        if (str[i] != ' ') {
            str[j++] = str[i];  // Copy only non-space characters
        }
        i++;
    }

    str[j] = '\0';  // End the new string

    printf("%s\n", str);
    return 0;
}
