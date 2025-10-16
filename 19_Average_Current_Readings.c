#include <stdio.h>
float average(int curr[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++) sum += curr[i];
    return (float)sum;
}
int main(){
    int current[5];
         printf("Enter 5 current readings (in mA): ");
            for(int i = 0; i < 5; i++) 
                scanf("%d", &current[i]);
                printf("Average Current = %f mA",average(current,5));
}
