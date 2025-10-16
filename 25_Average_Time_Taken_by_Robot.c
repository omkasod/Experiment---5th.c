#include <stdio.h>
float average(int t[], int n){
    int total=0;
    for(int i=0;i<n;i++) 
      total+=t[i];
    return (float)total/n;
}
int main(){
    int time[5];
         printf("Enter time taken in 5 trials (in seconds): ");
    for(int i=0;i<5;i++) 
            scanf("%d",&time[i]);
            printf("Average Time = %f sec",average(time,5));
}
