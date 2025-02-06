#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    if (a<1){
        printf("Freezing");
    }
    else {
        printf("Above Freezing");
    }
    return 0;
}