#include <stdio.h>

void countPosNeg(int arr[], int n) {
    int pos=0, neg=0;
        for(int i=0;i<n;i++) {
            if(arr[i] >= 0)
             pos++;
            else 
             neg++;
    }
    printf("Positive = %d, Negative = %d", pos, neg);
}

int main() {
    int arr[6];
         printf("Enter 6 numbers: ");
    for(int i=0;i<6;i++) 
        scanf("%d",&arr[i]);
        countPosNeg(arr,6);
    return 0;
}
