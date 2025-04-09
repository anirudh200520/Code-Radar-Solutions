#include <stdio.h>
#include <string.h>
int main(){
    char a[20];
    char b;
    int z;
    scanf("%s",&a);
    scanf("%c",&b);
    int l=strlen(a);
    for(int i=0; i<l; i++){
        if (a[i]==b){
            z=z+1;
        }
    }
    printf("%d",z);
}