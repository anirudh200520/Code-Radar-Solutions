#include <stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);

    for(int i=2; i<a; i++){
        if((a%i)==0){
            b=b+1;
        }
    }
    if (b>0){
        printf("Not Prime");
    }
    else{
        printf("Prime");
    }
}