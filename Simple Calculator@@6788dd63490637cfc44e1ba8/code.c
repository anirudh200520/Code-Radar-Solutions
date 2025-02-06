#include <stdio.h>

int main() {
    int a, b, c;
    char d;
    scanf("%d %d %c", &a, &b, &d);  // Input the two integers and operator
    if (d == '+') {
        c = a + b;
        printf("%d", c);
    }
    else if (d == '-') {
        c = a - b;
        printf("%d", c);
    }
    else if (d == '*') {
        c = a * b;
        printf("%d", c);
    }
    else if (d == '/') {
        if (b != 0) {  // Check for division by zero
            c = a / b;
            printf("%d", c);
        } else {
            printf("Error");
        }
    }
    else {
        printf("Error");
    }
    return 0;
}
