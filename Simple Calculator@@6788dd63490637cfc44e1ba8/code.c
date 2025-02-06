#include <stdio.h>

int main() {
    int a,b,c;
    char d;
    scanf("%d %d %c",&a,&b,&d);
    if (d=='+'){
        c=a+b;
        printf("%d",c);
    }
    if else (d=='-'){
        c=a-b;
        printf("%d",c);
    }
    if else (d=='*'){
        c=a*b;
        printf("%d",c);
    }
    if else (d=="/"){
        c=a/b;
        printf("%d",c);
    }
    else {
        printf("Errot");
    }
    return 0;
}