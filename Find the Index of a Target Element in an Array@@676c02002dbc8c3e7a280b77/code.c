#include <stdio.h>
int main(){
    int  a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0; i<a; i++){
        scanf("%d",&arr[i]);
    }
    int s=0;
    scanf("%d",&s);
    for (int i=0; i<a; i++){
        if (s==arr[i]){
            printf("%d",i);
            break;
        }
        else{
            printf("-1");
        }
    }
}