#include <stdio.h>
int replace(int arr[], int a, int i){
    int max=arr[i+1];
    for (int j=i+2; j<a; j++){
        if (arr[j]>max){
            max=arr[j];
        }
    }
    if (i==a){
        max=-1;
    }
    return max;
}
int main(){
    int a,max;
    scanf("%d",&a);
    int arr[a];
    for (int i=0; i<a; i++){
        scanf("%d", &arr[i]);
    }
    for (int i=0; i<a; i++){
        max=replace(arr,a,i);
        printf("%d ",max);
    }
}