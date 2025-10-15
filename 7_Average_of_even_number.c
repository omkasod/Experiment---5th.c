#include<stdio.h>

float avearage(int arr[], int n){

int sum = 0, count = 0;
for(int i = 0; i < n; i++){

    if(arr[i]%2==0){
            sum += arr[i];
            count++;
    }
}
        return count > 0 ? (float)sum/count :  0;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Average of even number = %f", avearage);

    return  0;
}