#include<stdio.h>

int findmin(int arr[], int n){
  int min = arr[0];
  for(int i = 1; i < n; i++)
    if(arr[i] < min)
            min = arr[i];
    return min;
}

int main(){
        int arr[5];
        printf("Enter 5 numbers: ");
            for(int i = 0; i < 5; i++)
            scanf("%d", &arr[i]);
            printf("Minimum = %d", findmin(arr, 5));
            

    return 0;
}