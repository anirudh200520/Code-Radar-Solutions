#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for (int i=0; i<a; i++){
        scanf("%d",&arr[i]);
    }
    int odd,even;
    for (int z=0; z<a; z++){
        if(arr[z]%2==0){
            even=even+1;
        }
        else{
            odd=odd+1;
        }
        
    }
    printf("%d %d",even,odd);
}