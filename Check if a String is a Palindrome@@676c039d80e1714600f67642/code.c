#include <stdio.h>
#include <string.h>
int main(){
    char a[20];
    char word[20];
    scanf("%s",&a);
    int l= strlen(a);

    for (int i=(l-1); i>=0; i--){
        word=word+a[i];
    }
    if (word == a){
        printf("Yes");
    }
    else{
        printf("No");
    }
}