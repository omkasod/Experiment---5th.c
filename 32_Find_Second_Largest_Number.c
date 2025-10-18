#include<stdio.h>

int secondlargest(int arr[], int n){
    int first = arr[0], second = -1;
    for(int i = 1; i < n; i++){
         if(arr[i] > first){
                second = first;
                first = arr[i];

         }
        else if(arr[i] > second && arr[i] != first){
                second = arr[i];

    }
}
return second;
}

int main(){
        int arr[6];
        printf("Enter 6 numbers: ");
        for(int i = 0; i < 6; i++)
           scanf("%d", &arr[i]);
        printf("second largest = %d", secondlargest(arr, 6));
    return 0;
}