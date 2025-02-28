
c
Copy
Edit
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        // Print spaces for alignment
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Print decreasing numbers
        for (int j = i; j >= 1; j--) {
            printf("%d", j);
        }

        // Print increasing numbers
        for (int j = 2; j <= i; j++) {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}