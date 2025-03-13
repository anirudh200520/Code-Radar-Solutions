#include <stdio.h>

int main() {
    int a,b;
    scanf("%d",&a);
    printf("Even\0Odd"+(a&1)*5);

}