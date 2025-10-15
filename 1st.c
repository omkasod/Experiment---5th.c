#include <stdio.h>

float average(int arr[], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++)
        sum += arr[i];
    return (float)sum / n;
}

int main() {
    int n;
    printf("Enter number of temp readings : ");
    scanf("%d", &n);

    int readings[n];
    printf("Enter %d temp readings:\n", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &readings[i]);

    float avg = average(readings, n);
    printf("Average temp Reading = %.2f\n", avg);

    return 0;
}
