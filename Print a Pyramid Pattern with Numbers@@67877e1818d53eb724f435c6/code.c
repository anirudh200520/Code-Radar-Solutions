#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for (int i=1;i<=a;i++){
        for (int j=(a-1);j>=1;j--){
            printf(" ");
        
        for (int o=1;o<=i;o++){
            printf("%d ",o);
        }
        }
        printf("\n");
    }
    return 0;
}