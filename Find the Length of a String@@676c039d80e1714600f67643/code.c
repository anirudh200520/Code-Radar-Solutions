#include <stdio.h>
#include <string.h>
int main(){
    char a[200];
    int z=0;
    int c=0;
    scanf("%s",&a);
    for(int i=0; z==0;  i++){
        if (a[i]==' '){
            z=1;
        }
        else{
            c=c+1;
        }
    }
    printf("%d",c);
}