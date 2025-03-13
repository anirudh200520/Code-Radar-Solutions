#include <stdio.h>

int main() {
    int a,b;
    scanf("%d",&a);
    printf("Odd\0Even"+(a&1)*4);

}