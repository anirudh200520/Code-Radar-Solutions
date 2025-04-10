#include <stdio.h>
#include <string.h>
int main() {
    char a[200];
    char b[200];
    fgets(a, sizeof(a), stdin);
    fgets(b, sizeof(b), stdin);
    strcat(a, b);
    printf("%s", a);
    return 0;
}
