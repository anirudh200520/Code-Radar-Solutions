#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    for (int i = 1; i <= a; i++) {
        // Print spaces first
        for (int j = 1; j <= a - i; j++) {
            printf(" ");
        }

        // Print stars
        for (int k = 1; k <= i; k++) {
            printf("*");
        }

        printf("\n");  // Move to the next line
    }

    return 0;
}
