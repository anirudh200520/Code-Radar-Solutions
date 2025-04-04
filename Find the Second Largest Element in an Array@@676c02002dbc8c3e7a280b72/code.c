#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for (int i=0; i<a; i++){
        scanf("%d",&arr[i]);
    }

    for (int i=0; i<a; i++){
        for (int j=(i+1); j<a; j++){
            if (arr[i]<arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    if(a==1 || a==0 || arr[0]==arr[1]){
        printf("-1");
    }
    else{
    printf("%d",arr[1]);
    }
}