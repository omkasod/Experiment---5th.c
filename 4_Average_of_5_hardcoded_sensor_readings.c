#include<stdio.h>

float average(int arr[], int n){

    int sum = 0;

         for(int i = 0; i < n; i++)
        sum += arr[i];
  
  return(float)sum / n;
}

int main(){
    int readings[5] = {10, 20, 30, 40, 50};
    printf("Average sensor reading = %f", average(readings, 5));




    return 0;
}