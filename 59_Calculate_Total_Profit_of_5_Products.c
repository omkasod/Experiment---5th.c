#include <stdio.h>

int totalProfit(int p[], int n){
    int sum=0;
    for(int i=0;i<n;i++) 
    sum+=p[i];
    return sum;
}

int main(){
    int profit[5];
        printf("Enter profit of 5 products: ");
    for(int i=0;i<5;i++) 
        scanf("%d",&profit[i]);
        printf("Total profit = %d", totalProfit(profit,5));
        return 0;
}
