#include <stdio.h>
float average(int age[], int n){
    int sum = 0;
        for(int i = 0; i < n; i++) 
        sum += age[i];
        return (float)sum; 
}
int main(){
    int age[5];
        printf("Enter age of 5 family members: ");
             for(int i = 0; i < 5; i++) 
                scanf("%d", &age[i]);
                 printf("Average Age = %f years", average(age,5));
}
