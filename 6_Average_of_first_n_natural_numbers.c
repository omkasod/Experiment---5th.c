#include<stdio.h>

float average(int arr[], int n){

    int sum = 0;
    for(int i = 0; i < n; i++)
        sum += arr[i];
      return(float)sum;

}

int main(){
    int n;
    printf("Enter n:");
    scanf("%d", &n);
    int arr[n];

        for(int i = 0; i < n; i++)
        arr[i] = i + 1;
          
      printf("Average = %f", average(arr, n));

return 0;
}