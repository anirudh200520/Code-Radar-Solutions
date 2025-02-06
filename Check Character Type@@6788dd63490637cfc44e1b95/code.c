#include <stdio.h>
#include <ctype.h>

int main() {
    char a;
    scanf("%s", a);
    if (isdigit(a)){
        printf("Digit");
    }
    else if (isalpha(a)){
        a=tolower(a);
        if (a=='a'||a=='e'||a=='i'||a=='o'||a=='u'){
            printf("Vowel");
        }
        else{
            printf("Consonant");
        }
    }
    else {
        print("Special Character");
    }
    return 0;
}