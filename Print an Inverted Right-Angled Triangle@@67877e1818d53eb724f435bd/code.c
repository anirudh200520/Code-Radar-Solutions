# include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for (int i=a;i>=1;i--){
        for (int y=i;y>=1;y--){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}