#include <stdio.h>

float average(int arr[], int n) {
    int sum=0;
    for(int i=0;i<n;i++)
        sum += arr[i];
    return (float)sum/n;
}

int main() {
    int arr[] = {5, 15, 25, 35, 45};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Average = %f", average(arr, n));
    return 0;
}
