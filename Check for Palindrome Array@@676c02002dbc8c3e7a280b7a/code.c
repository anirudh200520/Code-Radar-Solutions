#include <stdio.h>

int main() {
    int a, b = 0, c, d = 0; // Initialize variables
    scanf("%d", &a);        // Correct format specifier for input
    int arr[a];
    
    for (int i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }
    
    c = a - 1; // Start from the end of the array
    
    for (int z = 0; z < (a / 2); z++) { // Loop to compare elements
        if (arr[b] == arr[c]) {
            b += 1; // Move forward in the array
            c -= 1; // Move backward in the array
        } else {
            d = 1; // Set flag indicating not a palindrome
            break; // Exit the loop if mismatch is found
        }
    }
    
    if (d == 0) {
        printf("YES\n"); // Palindrome
    } else {
        printf("NO\n"); // Not a palindrome
    }
}
