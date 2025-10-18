#include<stdio.h>

void displayReverse(int arr[], int n){
        printf("Array in reverse order: ");
        for(int i=n-1; i>=0; i--)
    printf("%d", arr[i]);
}

int main(){
        int arr[5];
        printf("Enter 5 numbers: ");
        for(int i=0; i<5; i++)
        scanf("%d", &arr[i]);
        displayReverse(arr, 5);
    return 0;
}