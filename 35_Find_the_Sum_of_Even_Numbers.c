#include <stdio.h>

int sumEven(int arr[], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++)
        if(arr[i] % 2 == 0)
            sum += arr[i];
    return sum;
}

int main() {
    int arr[6];
        printf("Enter 6 numbers: ");
    for(int i = 0; i < 6; i++) 
        scanf("%d", &arr[i]);
        printf("Sum of Even Numbers = %d", sumEven(arr,6));
    return 0;
}
