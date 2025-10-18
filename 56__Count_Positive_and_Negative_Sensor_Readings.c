#include <stdio.h>

void countPosNeg(int arr[], int n){
    int pos=0, neg=0;
    for(int i=0;i<n;i++){
        if(arr[i]>0) pos++;
        else if(arr[i]<0) neg++;
    }
    printf("Positive=%d, Negative=%d\n", pos, neg);
}

int main(){
    int s[8];
        printf("Enter 8 sensor readings: ");
    for(int i=0;i<8;i++)
         scanf("%d", &s[i]);
        countPosNeg(s,8);
        return 0;
}
