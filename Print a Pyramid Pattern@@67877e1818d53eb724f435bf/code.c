#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++) {
        for (int j = 0; j < a - i; j++) {
            printf(" ");
        }
        for (int q = 0; q < (2 * i - 1); q++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
