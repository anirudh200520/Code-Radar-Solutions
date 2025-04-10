#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    float max=0,average=0;
    for (int i=0; i<a;  i++){
        int z;
        char x[200];
        float c;
        scanf("%d",&z);
        scanf("%s",&x);
        scanf("%f",&c);
        max=max+c;

    }
    average=max/a;
    printf("Average Marks: %.2f",max);
}