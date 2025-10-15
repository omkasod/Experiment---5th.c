#include <stdio.h>

float average(int arr[], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return (float)sum / n;
}

int main() {
    int temp[7];
    printf("Enter temperature for 7 days:\n");

    for(int i = 0; i < 7; i++) {
        scanf("%d", &temp[i]);
    }

    float avg = average(temp, 7); 
    printf("Weekly average temperature = %.2f\n", avg);

    return 0;
}
