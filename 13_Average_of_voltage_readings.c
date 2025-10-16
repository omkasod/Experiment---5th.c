#include <stdio.h>
float average(int v[], int n){
    int sum = 0;
        for(int i = 0; i < n; i++) sum += v[i];
    return (float)sum/n;
}
int main(){
    int voltage[5];
        printf("Enter 5 voltage readings: ");
            for(int i = 0; i < 5; i++) scanf("%d", &voltage[i]);
                printf("Average Voltage = %f V",average(voltage,5));
}
