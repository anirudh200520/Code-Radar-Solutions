#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for (int i=1; i<=a; i++){
        for (int j=0; j<i; j++){
            printf(" ");
        }
        int b=0;
        b=(i*2)-1;
        for  (int q=1; q<=b; q++){
            printf("*");
        }
        printf("\n");
    }

}