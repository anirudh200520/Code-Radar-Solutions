#include <stdio.h>

int main() {
    int a,p;
    p=0;
    scanf("%d",&a);
    
    if (a==0){
        p=-1;
    }
    else{
        while ((a & 1)==0){
            a>>=1;
            p++;
        }
    }

    if (p==-1){
        printf("%d",p);
    }
    else{
        printf("%d",p);
    }
    return 0;
}