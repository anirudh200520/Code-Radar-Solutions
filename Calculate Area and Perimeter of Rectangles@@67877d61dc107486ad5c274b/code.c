#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for (int i=0; i<a; i++){
        int x=0;
        int y=0;
        scanf("%d %d",&x,&y);
        float area =x*y;
        float peri =2*(x+y);
        printf("Rectange %d: %.2f, Perimeter = %.2f\n",(i+1),area,peri);
    }
    return 0;
}