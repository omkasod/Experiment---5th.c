#include<stdio.h>

float average(int h[], int n){
        int sum = 0;
        for(int i = 0; i < n; i++)
            sum += h[i];
    return(float)sum;
}

int main(){
        int height[5];
        printf("Enter height of 5 students:");
            for(int i = 0; i < 5; i++)
        scanf("%d", &height[i]);

            printf("Average height is = %f cm", average(height,5));



    return 0;
}