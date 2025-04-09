#include <stdio.h>
#include <string.h>
int main(){
    char a[20];
    int c=0;
    scanf("%s",&a);
    int len = strlen(a);
    for  (int i=0; i<len; i++){
        if (a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'){
            c=c+1;
        }
    }
    printf("%d",c);
}