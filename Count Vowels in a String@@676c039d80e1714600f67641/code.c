#include <stdio.h>
#include <string.h>
int main(){
    char a[20];
    int c=0;
    scanf("%s",&a);
    int len = strlen(a);
    for  (int i=0; i<len; i++){
        if (a[i]=='a''||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'){
            c=c+1;
        }
    }
    printf("%d",c);
}