#include <stdio.h>
int main(){
    int  a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0; i<a; i++){
        scanf("%d",&arr[i]);
    }
    int s=0;
    int c=0;
    scanf("%d",&s);
    for (int i=0; i<a; i++){
        if (s==arr[i]){
            printf("%d",i);
            c=c+1;
            break;
        }
        
    }
    if(c==0){
        printf("-1")
    }
}