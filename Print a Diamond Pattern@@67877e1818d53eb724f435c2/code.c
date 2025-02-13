#include <stdio.h>
int main (){
    int a,b,c;
    scanf ("%d",&a);
    for (int i=1;i<=a;i++){
        for (int o=1;o<=(a-i);o++){
            printf(" ");
        }
        b=(i*2)-1;
        for (int j=1;j<=b;j++){
            printf("*");
        } 
        printf("\n");
    }
    for (int i = a - 1; i >= 1; i--) {
        for (int o = 1; o <= (a - i); o++) {
            printf(" ");
        }
        for (int j = 1; j <= (i * 2) - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}