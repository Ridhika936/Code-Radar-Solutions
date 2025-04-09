#include <stdio.h>
#include <string.h>

int isRotation(char s1[], char s2[]) {
    // Check if lengths are equal
    if (strlen(s1) != strlen(s2)) {
        return 0;
    }

    // Make a new string s1s1 = s1 + s1
    char temp[200];
    strcpy(temp, s1);
    strcat(temp, s1);

    // Check if s2 is substring of temp
    if (strstr(temp, s2) != NULL) {
        return 1;  // It is a rotation
    } else {
        return 0;  // Not a rotation
    }
}

int main() {
    char str1[100], str2[100];
    scanf("%s", str1);
    scanf("%s", str2);

    if (isRotation(str1, str2)) {
        printf("Yes");
    } else {
        printf("No");
    }

    return 0;
}
