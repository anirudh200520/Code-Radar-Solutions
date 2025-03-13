#include <stdio.h>

int main() {
    int a,b;
    scanf("%d",&a);
    printf("Odd\0Even"+(a&0)*4);

}