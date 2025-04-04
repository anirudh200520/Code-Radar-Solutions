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
            if (arr[i]<arr[j]){
                int temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    int min =arr[0]-arr[1];
    int b=arr[0];
    int c=arr[1];
    if (a==1){
        printf("-1");
    }
    else{
    for (int i=1; i<a; i++){
        for (int j=(i+1);j<a;j++){
            if (arr[i]-arr[j]<min){
                min=arr[i]-arr[j];
                b=arr[i];
                c=arr[j];

            }
        }
    }
}
printf("%d %d",c,b);

}