#include <stdio.h>

void copyArray(int src[], int dest[], int n) {
    for(int i = 0; i < n; i++)
        dest[i] = src[i];
}

int main() {
    int a[5], b[5];
    printf("Enter 5 numbers: ");
    for(int i = 0; i < 5; i++)
        scanf("%d", &a[i]);
    copyArray(a, b, 5);
    printf("Copied Array: ");
    for(int i = 0; i < 5; i++)
        printf("%d ", b[i]);
    return 0;
}
