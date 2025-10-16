#include <stdio.h>
float average(int d[], int n){
    int sum=0;
    for(int i=0;i<n;i++) sum+=d[i];
    return (float)sum/n;
}
int main(){
    int distance[5];
         printf("Enter 5 distance readings (in cm): ");
    for(int i=0;i<5;i++) 
            scanf("%d",&distance[i]);
            printf("Average Distance = %f cm",average(distance,5));
}   
