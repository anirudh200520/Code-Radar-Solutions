#include <stdio.h>

int main () {
    int a, b;
    scanf("%d %d", &a, &b);  // Input two integers: a and b

    a = a ~ (a << b);  // Perform bitwise operations on 'a' with left shift and NOT
    printf("%d", a);   // Print the modified value of 'a'
}
