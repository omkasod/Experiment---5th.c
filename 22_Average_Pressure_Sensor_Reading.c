#include <stdio.h>
float average(int p[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++) 
    sum += p[i];
    return (float)sum;
}
int main(){
    int pressure[6];
        printf("Enter 6 pressure readings: ");
    for(int i = 0; i < 6; i++) 
            scanf("%d", &pressure[i]);

            float avg = average(pressure, 6);
            printf("Average Pressure = %.2f Pa",avg);
    return 0;
}
