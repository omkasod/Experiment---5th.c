#include <stdio.h>

int totalDistance(int d[], int n){
    int sum=0;
    for(int i=0;i<n;i++) 
    sum += d[i];
    return sum;
}

int main(){
    int d[5];
        printf("Enter distance covered in 5 trips (km): ");
    for(int i=0;i<5;i++) 
        scanf("%d",&d[i]);
        printf("Total distance = %d km\n", totalDistance(d,5));
        return 0;
}
