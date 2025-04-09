#include <stdio.h>

int main() {
    char str[100];
    int i;
    scanf(" %[^\n]", str);  // Read full line with spaces

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; // To uppercase
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32; // To lowercase
        }
    }

    printf("%s\n", str);
    return 0;
}
