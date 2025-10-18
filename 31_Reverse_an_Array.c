#include<stdio.h>

void reverse(int arr[], int n){
    printf("Reverded array: ");
    for(int i = n; i >= 0; i--)
        printf("%d", arr[i]);

}

int main(){
    int arr[5];
    printf("Enter 5 numbers: ");
    for(int i = 0; i < 5; i++)
       scanf("%d", &arr[i]);
    reverse(arr, 5);
    return 0;
}