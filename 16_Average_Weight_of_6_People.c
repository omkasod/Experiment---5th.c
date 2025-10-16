#include <stdio.h>
float average(int w[], int n){
    int total=0;
    for(int i=0;i<n;i++) total+=w[i];
    return (float)total/n;
}
int main(){
    int weight[6];
    printf("Enter weights of 6 people: ");
    for(int i=0;i<6;i++) scanf("%d",&weight[i]);
    printf("Average Weight = %.2f kg",average(weight,6));
}
