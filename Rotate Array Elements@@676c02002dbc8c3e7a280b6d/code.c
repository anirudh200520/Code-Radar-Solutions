#include <stdio.h>


void rotate(int arr[], int a, int d) {
    for (int i = 0; i < d; i++) {
        int z = arr[0];
        for (int j = 0; j < (a - 1); j++) {
            arr[j] = arr[j + 1];
        }
        arr[a - 1] = z;
    }
}

int main() {
    int a; // size of the array
    scanf("%d", &a);

    int arr[a];
    for (int i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }

    int d; // number of rotations
    scanf("%d", &d);

    rotate(arr, a, d);

    for (int i = 0; i < a; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
