#include <stdio.h>


int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for (int i=0; i<a; i++){
        scanf("%d",&arr[i]);
    }
    int s;
    scanf("%d",&s);


    for (int i=0; i<a; i++){
        for  (int j=i+1; j<a; j++){
            if (arr[i]+arr[j]==s ){
                printf("%d %d\n",arr[i],arr[j]);
            }
        }
    }
}