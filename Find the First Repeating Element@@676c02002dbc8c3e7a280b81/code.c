#include <stdio.h>
int main(){
    int a;
    int c=0;
    scanf("%d",&a);
    int arr[a];
    for(int i=0; i<a; i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0; i<a; i++){
        for (int j=(i+1); j<a; j++){
            if (arr[i]==arr[j]){
                printf("%d",arr[i]);
                c=1;
            }
            break;
        }
    }
    if(c==0){
        printf("-1");
    }
}