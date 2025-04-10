#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for (int  i=0; i<a; i++){
        int z;
        char x[200];
        float c;
        scanf("%d",&z);
        scanf("%s",&x);
        scanf("%f",&c);
        printf("Roll Number: %d, Name: %s, Marks: %.2f",z,x,c);
    }
}