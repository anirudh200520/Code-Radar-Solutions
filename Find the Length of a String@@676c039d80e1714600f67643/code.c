#include <stdio.h>
int main() {
    char str[200];
    int count = 0; 
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != '\n') { 
            count++;
        }
    }
    printf("%d", count);
    return 0;
}
