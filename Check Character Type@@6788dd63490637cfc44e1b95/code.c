#include <stdio.h>
#include <ctype.h>

int main() {
    char a;
    scanf(" %c", &a);  // Space before %c to handle newlines

    if (isdigit((unsigned char)a)) {  // Check if digit
        printf("Digit\n");
    } 
    else if (isalpha((unsigned char)a)) { // Check if alphabet
        a = tolower(a); // Convert to lowercase

        if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u') {
            printf("Vowel\n");
        } else {
            printf("Consonant\n");
        }
    } 
    else {
        printf("Special Character\n");
    }

    return 0;
}
