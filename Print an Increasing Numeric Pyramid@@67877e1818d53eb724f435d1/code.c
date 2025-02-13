#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    for (int i = 1; i <= a; i++) {
        // Print spaces for right alignment
        for (int j = 1; j <= (a - i); j++) {
            printf(" ");
        }
        // Print numbers in increasing order
        for (int o = 1; o <= i; o++) {
            printf("%d ", o);
        }
        printf("\n");
    }
    
    return 0;
}
