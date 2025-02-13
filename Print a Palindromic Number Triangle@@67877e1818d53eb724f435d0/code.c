#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for (int i=1;i<=a;i++){
        for(int j=1;j<=(a-i);j++){
            printf(" ");
        }
        for(int o=1;o<=a;o++){
            printf("%d",o);
        }
        for (int p=(i-1);p>=1;p--){
            printf("%d",p);
        }
        printf("\n");
    }
    return 0;
}