#include <stdio.h>
#include <string.h>

int main() {
    char a[200];
    char b[200];

    // Read two strings
    fgets(a, sizeof(a), stdin);
    fgets(b, sizeof(b), stdin);

    // Remove the newline character added by fgets
    a[strcspn(a, "\n")] = '\0'; // Replace '\n' with '\0'
    b[strcspn(b, "\n")] = '\0';

    // Concatenate strings
    strcat(a, b);

    // Print the concatenated result
    printf("%s\n", a);

    return 0;
}
