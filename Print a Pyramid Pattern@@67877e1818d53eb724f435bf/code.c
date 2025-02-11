# include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d",&a);
    c=a-1;
    for(int i=1;i<=a;i++){
        b=(i*2)-1;
        for(int y=1;y<=b;y++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}