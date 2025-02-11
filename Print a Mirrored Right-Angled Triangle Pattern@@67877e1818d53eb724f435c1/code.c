# include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for (int i=1;i<=a;i++){
        for (int o=1;o<a;o++){
            printf(" ");
        
        for (int c=1;c<=i;c++){
            printf("*");
        }
        printf("\n");
    }
    }
    return 0;
}