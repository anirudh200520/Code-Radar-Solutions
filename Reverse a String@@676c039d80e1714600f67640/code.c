#include <stdio.h>
#include <string.h>
int main(){
    char a[20];
    scanf("%s",&a);
    int len = strlen(a);
    for (int i=(len-1); i>=0; i--){
        printf("%c",a[i]);
    }

}