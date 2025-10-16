#include<stdio.h>

float average(int power[], int n){
      int total = 0;
        for(int i = 0; i < n; i++)  
            total += power[i];

            return(float)total;
}

int main(){
  int power[6];
  printf("Enter power consumption for 6 hrs: ");
  for(int i = 0; i < 6; i ++){
        scanf("%d", &power[i]);
        printf("Average power = %f w", average(power, 6));
  }
    return 0;
}