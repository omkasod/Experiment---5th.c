#include <stdio.h>
float average(int arr[], int n){
    int total = 0;
    for(int i=0;i<n;i++) total+=arr[i];
    return (float)total/n;
}
int main(){
    int marks[5];
    printf("Enter marks of 5 subjects: ");
    for(int i=0;i<5;i++) scanf("%d",&marks[i]);
    printf("Average Marks = %.2f",average(marks,5));
}
