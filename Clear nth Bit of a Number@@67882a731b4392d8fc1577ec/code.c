#include <stdio.h>

int main () {
    int a, b;
    scanf("%d %d", &a, &b);  

    a = a ~ (a << b);  // Problematic line
    printf("%d", a);   // Print the result
}
