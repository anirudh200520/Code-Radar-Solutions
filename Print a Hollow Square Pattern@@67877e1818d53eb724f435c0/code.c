# include <stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    b=a-2;
    for (int i=1;i<=a;i++){
        printf("*");
    }
    printf("\n");
    if (b>=1){
        printf("*");
            for (int x=1; x<=b ; x++){
                printf(" ");
            }
        printf("*\n");
        }
    }


