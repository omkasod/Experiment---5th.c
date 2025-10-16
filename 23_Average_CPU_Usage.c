#include <stdio.h>
float average(int cpu[], int n){
    int total = 0;
    for(int i = 0; i < n; i++) 
    total += cpu[i];
    return (float)total/n;
}
int main(){
    int usage[5];
    printf("Enter CPU usage for 5 readings: ");
    for(int i = 0; i < 5; i++)
     scanf("%d",&usage[i]);
    printf("Average CPU Usage = %f",average(usage,5));
}
