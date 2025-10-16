#include<stdio.h>

int findmax(int arr[], int n){
  int max = arr[0];
  for(int i = 1; i < n; i++)
    if(arr[i] > max)
            max = arr[i];
    return max;
}

int main(){
        int arr[5];
        printf("Enter 5 numbers: ");
            for(int i = 0; i < 5; i++)
            scanf("%d", &arr[i]);
            printf("Maximum = %d", findmax(arr, 5));
            

    return 0;
}