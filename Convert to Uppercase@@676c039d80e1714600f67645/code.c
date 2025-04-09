#include <stdio.h>

int main() {
    char str[100];
    int isAlreadyUpper = 1;
    scanf("%s",str);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            isAlreadyUpper = 0; // Found a lowercase letter
            str[i] = str[i] - 32; // Convert to uppercase
        }
        
    }

    if (isAlreadyUpper) {
        printf("%c", str);
    } else {
        printf("%s\n",str);
    }

    return 0;
}
