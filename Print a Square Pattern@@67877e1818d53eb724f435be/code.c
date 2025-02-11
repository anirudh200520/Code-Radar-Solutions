# include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for (int i=1; i<=a; i++){
        for (int y=1; y<=a; y++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}