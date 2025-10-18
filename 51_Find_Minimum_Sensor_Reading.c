#include <stdio.h>

int minReading(int r[], int n){
    int min = r[0];
    for(int i=1;i<n;i++)
        if(r[i] < min) min = r[i];
    return min;
}

int main(){
    int r[5];
         printf("Enter 5 sensor readings: ");
    for(int i=0;i<5;i++) 
        scanf("%d",&r[i]);
    printf("Lowest reading = %d\n", minReading(r,5));

    return 0;
}
