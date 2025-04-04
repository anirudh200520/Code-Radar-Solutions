#include <stdio.h>
int main(){
    int  a;
    scanf("d",&a);
    int arr[a];
    for (int i=0;i<a; i++){
        scanf("%d",&arr[i]);
    }
    if (a%2==1)
    int b=0,c=a-1;
    for (int z=0; z<((a-1)/2); z++){
        if (arr[b]==arr[c]){
            d=0;
            b=b+1;
            c=0;
        }
        else{
            break;
            c=1;
        }
    }
    if (c==0){
        printf("YES");
    }
    else{
        printf("NO");
    }
}