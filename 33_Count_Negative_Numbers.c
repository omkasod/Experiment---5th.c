#include <stdio.h>

int countNegative(int arr[], int n) {
    int count = 0;
    for(int i = 0; i < n; i++)
        if(arr[i] < 0)
            count++;
    return count;
}

int main() {
    int arr[6];
        printf("Enter 6 numbers: ");
        for(int i = 0; i < 6; i++)
            scanf("%d", &arr[i]);
            printf("Negative Numbers = %d", countNegative(arr, 6));
    return 0;
}
