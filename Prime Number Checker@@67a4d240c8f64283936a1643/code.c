#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int num;
        scanf("%d",&num);
        printf("%d\n", isPrime(num));
    }
}

void isPrime( int num ){
    int c;
    for (int i=2; i<num; i++){
        if((num%i)==0){
            c=c+1;
        }
    }
    if (c==0 || num==2 ){
        printf("0");
    }
    else{
        printf("1");
    }
}

