#include <stdio.h>

int countOdd(int a[], int n){
    int c=0;
    for(int i=0;i<n;i++)
        if(a[i]%2!=0) c++;
    return c;
}

int main(){
    int a[7];
        printf("Enter 7 numbers: ");
    for(int i=0;i<7;i++)
         scanf("%d",&a[i]);
        printf("Odd numbers count = %d\n", countOdd(a,7));
        return 0;
}
