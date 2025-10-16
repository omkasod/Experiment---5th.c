#include <stdio.h>
float average(int light[], int n){
    int sum=0;
    for(int i=0;i<n;i++) sum+=light[i];
    return (float)sum/n;
}
int main(){
    int light[5];
    printf("Enter 5 light sensor readings: ");
    for(int i=0;i<5;i++) scanf("%d",&light[i]);
    printf("Average Light Reading = %f",average(light,5));
}
