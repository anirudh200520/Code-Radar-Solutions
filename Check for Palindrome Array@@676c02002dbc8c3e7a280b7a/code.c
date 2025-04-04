#include <stdio.h>

int main() {
    int a, b = 0, c, d = 0;
    scanf("%d", &a);        
    int arr[a];
    
    for (int i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }
    
    c = a - 1; 
    
    for (int z = 0; z < (a / 2); z++) { 
        if (arr[b] == arr[c]) {
            b += 1; 
            c -= 1; 
        } else {
            d = 1; 
            break; 
        }
    }
    
    if (d == 0) {
        printf("YES\n"); 
    } else {
        printf("NO\n"); 
    }
}
