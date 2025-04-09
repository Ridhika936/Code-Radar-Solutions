#include <stdio.h>

int main() {
    char str[200], result[200];
    int i = 0, j = 0;
    fgets(str, sizeof(str), stdin);  // read full line

    while (str[i] != '\0') {
        // Check if character is a vowel (lowercase or uppercase) or space
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' ||
            str[i] == ' ' || (str[i]>='0' && str[i]<='9')) {
            result[j] = str[i];  // keep the vowel or space
            j++;
        }
        i++;
    }

    result[j] = '\0';  // end the result string

    printf("%s", result);
    return 0;
}
