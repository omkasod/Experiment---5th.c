#include<stdio.h>

void mergeArrays(int a[], int b[], int c[], int n1, int n2){
        for(int i=0; i<n1; i++)
         c[i] = a[i];
         for(int i=0; i<n2; i++)
            c[n1+i] = b[i];
}
int main(){
    int a[3], b[3], c[6];
    printf("Enter 3 element for first array: ");
        for(int i=0; i<3; i++)
        scanf("%d", &a[i]);
    printf("Enter 3 element for second array: ");
        for(int i=0; i<3; i++)
         scanf("%d", &b[i]);
    
    mergeArrays(a, b, c, 3, 3);
    printf("Merged arrays: ");
    for(int i=0; i<6; i++)
    printf("%d", c[i]);

   
    return 0;
}