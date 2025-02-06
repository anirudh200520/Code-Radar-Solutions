#include <stdio.h>

int main() {
    int a,b;
    scanf("%d",a);
    if (a==1 ||a==3 ||a==5||a==7||a==8||a==10||a==12){
        b=31;
        printf("%d",b);
    }
    else if (a==4 ||a==6||a==9||a==11){
        b=30;
        printf("%d",b);
    }
    else if (a==2){
        b=28;
        printf("%d",b);
    }
    else{
        printf("Invalid month");
    }
    return 0;
}