#include <stdio.h>

int main() {
    char a[5];
    scanf("[^\n]s",&a);
    printf("You entered: %s",a);
    return 0;
}