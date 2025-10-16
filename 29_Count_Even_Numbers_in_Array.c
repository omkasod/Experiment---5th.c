#include<stdio.h>

int counteven(int arr[], int n){
        int count = 0;
        for(int i =0; i < n; i++)
            if(arr[i]%2 == 0)
            count++;

    return count;
}

int main(){
    int arr[6];
    printf("Enter 6 numbers: ");
    for(int i = 0; i < 6; i++)
    scanf("%d", &arr[i]);
    printf("Even numbers = %d", counteven(arr,6));
    return 0;
}