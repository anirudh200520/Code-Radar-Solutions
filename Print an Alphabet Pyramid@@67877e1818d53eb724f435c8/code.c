# include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for (int i=1;i<=a;i++){
        for (int j=65;j<=64+i;j++){
            printf("%c ",j);
        }
        printf("\n");
    }
    return 0;
}