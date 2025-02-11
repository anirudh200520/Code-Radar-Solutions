# include <stdio.h>
int main (){
    int a;
    scanf("%d",&a);
    for (int i=1;i<=a;i++){
        for (int y=65;y<65+i;y++){
            printf("%c",y);
        }
        printf("\n");
    }
    return 0;
}