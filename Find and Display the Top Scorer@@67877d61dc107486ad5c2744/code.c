#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
        int z,q;
        char x[200],w[200];
        float c;
        float e=0;
    for (int i=0; i<a; i++){
        scanf("%d",&z);
        scanf("%s",&x);
        scanf("%f",&c);
        if(e<c){
            q=z;
            w=x;
            e=c;
        }
    }
    printf("Top Scorer: Roll Number: %d, Name: %s, Marks: %.2f",q,w,e);
}