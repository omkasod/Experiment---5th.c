#include <stdio.h>

int countDiv2(int a[], int n){
    int c=0;
    for(int i=0;i<n;i++)
        if(a[i]%2==0) c++;
    return c;
}

int main(){
    int a[6];
    printf("Enter 6 numbers: ");
    for(int i=0;i<6;i++) scanf("%d",&a[i]);
    printf("Numbers divisible by 2 = %d\n", countDiv2(a,6));
    return 0;
}
