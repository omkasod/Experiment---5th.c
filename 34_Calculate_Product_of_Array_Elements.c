#include <stdio.h>

int product(int arr[], int n) {
    int prod = 1;
    for(int i = 0; i < n; i++)
        prod *= arr[i];
    return prod;
}

int main() {
    int arr[5];
        printf("Enter 5 numbers: ");
    for(int i = 0; i < 5; i++)
        scanf("%d", &arr[i]);
        printf("Product = %d", product(arr, 5));
    return 0;
}
