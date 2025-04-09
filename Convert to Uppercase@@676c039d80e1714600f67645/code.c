#include <stdio.h>
#include<string.h>

int main() {
    char str[100];
    int isAlreadyUpper = 1;
    scanf("%s",str);

    for (int i = 0; str[i] != '\0'; i++) {
        if  ((str[i] >= 'a' && str[i] <= 'z') || str[i]!=' ') {
            isAlreadyUpper = 0; // Found a lowercase letter
            str[i] = str[i] - 32; // Convert to uppercase
        }
        
    }

    if (isAlreadyUpper) {
        printf("%s",str);
    } else {
        printf("%s",str);
    }

    return 0;
}
