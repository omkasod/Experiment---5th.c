#include <stdio.h>

int countAbove75(int m[], int n){
    int c=0;
    for(int i=0;i<n;i++)
        if(m[i]>75) c++;
    return c;
}

int main(){
    int marks[10];
        printf("Enter marks of 10 students: ");
    for(int i=0;i<10;i++) 
        scanf("%d",&marks[i]);
         printf("Students scoring above 75 = %d\n", countAbove75(marks,10));
         return 0;
}
