#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for (int i=1;i<=a;i++){
        for (int j=1;j<=i;j++){
            if (i%2==1){
                if(j%2==0){
                    printf("0 ");
                }
                else{
                    printf("1 ");
                }
                
            }
            else{
                if(j%2==1){
                    printf("0 ");
                }
                else{
                    printf("1 ");
                }
            }
        
        }
        printf("\n");
    }
    return 0;
}