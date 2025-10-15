#include<stdio.h>

float average(float arr[], int n){
    float sum = 0;
    for(int i = 0; i < n; i++)
    sum += arr[i];
    return sum;
}

int main(){
        int n;
        printf("Enter number of days: ");
        scanf("%d", &n);
            float rain[n];
                    for(int i = 0; i < n; i++)
                    scanf("%f", &rain[i]);
                    printf("Average Rainfall = %f", average(rain, n));




    return 0;
}