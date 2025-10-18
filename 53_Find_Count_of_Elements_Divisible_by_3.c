#include <stdio.h>

int countDiv3(int a[], int n){
    int c=0;
    for(int i=0;i<n;i++)
        if(a[i]%3==0) c++;
    return c;
}

int main(){
    int a[6];
        printf("Enter 6 numbers: ");
    for(int i=0;i<6;i++)
         scanf("%d",&a[i]);
         printf("Numbers divisible by 3 = %d\n", countDiv3(a,6));
         return 0;
}
