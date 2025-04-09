#include <stdio.h>
#include <string.h>

int main() {
    char s1[100];
    printf("Enter a string: ");
    scanf("%s", s1);

    int freq[256] = {0};

    // Count frequency of each character
    for (int i = 0; s1[i] != '\0'; i++) {
        freq[(int)s1[i]]++;
    }

    // Find the first character with frequency 1
    for (int i = 0; s1[i] != '\0'; i++) {
        if (freq[(int)s1[i]] == 1) {
            printf("%c\n", s1[i]);
            return 0;
        }
    }

    printf("-");
    return 0;
}
