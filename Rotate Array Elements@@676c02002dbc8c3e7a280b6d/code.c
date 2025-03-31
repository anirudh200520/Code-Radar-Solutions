#include <stdio.h>

int rotate(int arr[], int a, int d){
    for (int i=0; i<d; i++){
        int z= arr[0];
        for (int j=0; j<(a-1); j++){
            arr[j]=arr[j+1];
        }
        arr[d-1]=z;
    }
}

int main(){
    int a; //size ==a
    int arr[a];
    for (int i=0; i<a; i++){
        scanf("%d",&arr[i]);
    }
    int d;
    scanf("%d",&d);
    rotate(arr,a,d);
    for (int i=0; i<a; i++){
        printf("%d\n",arr[i]);
    }


}

