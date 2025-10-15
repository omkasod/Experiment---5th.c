#include <stdio.h>

float average(int arr[], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++)
        sum += arr[i];
    return (float)sum / n;
}
int main() {
    int n;
    printf("Enter number  : ");
    scanf("%d", &n);

    int numbers[n];
    printf("Enter %d numbers :\n", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &numbers[i]);

    float avg = average(numbers, n);
    printf("Average  = %.2f\n", avg);

    return 0;
}
