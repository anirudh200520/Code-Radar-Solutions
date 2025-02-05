#include <stdio.h>

int main() {
    char a[20],b[20];
    int c;
    scanf("%s",&a);
    scanf("%d",&c);
    scanf("%s",&b);
    print("Name: %s\n",a);
    print("Age: %d\n",c);
    print("Hobby: %s",b);
    printf("%s", welcome());
    return 0;
}