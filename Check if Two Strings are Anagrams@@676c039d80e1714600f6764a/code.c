#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int count[256] = {0};
    int i;
    scanf("%s", str1);
    scanf("%s", str2);

    // Step 1: Count characters in first string
    for (i = 0; str1[i] != '\0'; i++) {
        count[(int)str1[i]]++;
    }

    // Step 2: Subtract characters in second string
    for (i = 0; str2[i] != '\0'; i++) {
        count[(int)str2[i]]--;
    }

    // Step 3: Check if all values in count[] are zero
    for (i = 0; i < 256; i++) {
        if (count[i] != 0) {
            printf("No");
            return 0;
        }
    }

    printf("Yes");
    return 0;
}
