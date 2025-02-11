#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    for (int i = 1; i <= a; i++) {
        // Print spaces for centering
        for (int o = 1; o <= a - i; o++) {
            printf(" ");
        }

        // Print stars
        for (int c = 1; c <= (2 * i - 1); c++) {
            printf("*");
        }

        printf("\n");  // Move to the next line
    }

    return 0;
}
