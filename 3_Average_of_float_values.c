#include <stdio.h>

float average(float arr[], int n) {
    float sum = 0;
    for(int i=0; i<n; i++)
        sum += arr[i];
    return sum / n;
}

int main() {
    int n;
    printf("Enter number of numbers: ");
    scanf("%d", &n);
    float arr[n];
      
       printf("Enter numbers: \n");
    for(int i=0; i<n; i++)
        scanf("%f", &arr[i]);
    printf("Average = %.2f\n", average(arr, n));
    return 0;
}
