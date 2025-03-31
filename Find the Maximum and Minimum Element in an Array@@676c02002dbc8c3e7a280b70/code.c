#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for (int i=0; i<a;i++){
        scanf("%d",&arr[i]);
    }
    int min,max;
    min=arr[0];
    max=arr[0];
    for(int j=1; j<a; j++){
        if( min > arr[j]){
            min=arr[j];
        }
    }
    for (int w=1; w<a;w++){
        if (max < arr[w]){
            max=arr[w];
        }
    }
    printf("%d %d",min,max);
}