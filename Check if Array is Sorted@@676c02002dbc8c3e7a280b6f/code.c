#include <stdio.h>
int main(){
    int a;
    int c=0;
    scanf("%d",&a);
    int arr[a];
    for (int i=0; i<a; i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0; i<a; i++){
        for (int j=(i+1); j<a; j++){
            if (arr[i]>arr[j]){
                c=c+1;
            }
        }
    }
    if (c==0 || a==1){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }
}