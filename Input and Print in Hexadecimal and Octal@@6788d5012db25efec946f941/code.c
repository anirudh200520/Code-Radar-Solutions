#include <stdio.h>
int main(){
    int a;
    scandf("%d",&a);
    printf("Hexadecimal: %X",a);
    printf("Octal: %o",a);
    return 0;
}