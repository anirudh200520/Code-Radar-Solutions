#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0; i<a; i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<a; i++){
        for (int j=(i+1); j<a; j++){
            if (arr[i]>arr[j]){
                int temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    int min =arr[a-1]-arr[a-2];
    int b=arr[a-1];
    int c=arr[a-2];
    if (a==1){
        printf("-1");
    }
    else{
    for (int i=(a-1); i<0; i--){
        for (int j=(i-1);j<0;j--){
            if (arr[j]-arr[i]<min){
                min=arr[i]-arr[j];
                b=arr[i];
                c=arr[j];

            }
        }
    }
}
printf("%d %d",c,b);

}