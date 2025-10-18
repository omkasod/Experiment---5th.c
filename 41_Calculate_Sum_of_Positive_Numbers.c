#include <stdio.h>

int sumPositive(int arr[], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++)
        if(arr[i] > 0)
            sum += arr[i];
    return sum;
}

int main() {
    int arr[8];
         printf("Enter 8 numbers: ");
    for(int i = 0; i < 8; i++)
        scanf("%d", &arr[i]);
        printf("Sum of Positive Numbers = %d\n", sumPositive(arr, 8));
    return 0;
}
