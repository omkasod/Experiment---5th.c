#include <stdio.h>

int countZero(int a[], int n){
    int c=0;
    for(int i=0;i<n;i++)
        if(a[i]==0) c++;
    return c;
}

int main(){
    int a[8];
        printf("Enter 8 numbers: ");
    for(int i=0;i<8;i++) 
        scanf("%d",&a[i]);
        printf("Total zeros = %d\n", countZero(a,8));
        return 0;
}
