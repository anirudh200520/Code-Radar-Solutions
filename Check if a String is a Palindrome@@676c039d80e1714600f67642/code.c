#include <stdio.h>
#include <string.h>
int main(){
    char a[20];
    char word[20];
    scanf("%s",&a);
    int l= strlen(a);

    for (int i=(l-1); i>=0; i--){
        strncat(word, &a[i], 1);
    }
    if  (strcmp(word, a) == 0){
        printf("Yes");
    }
    else{
        printf("No");
    }
}