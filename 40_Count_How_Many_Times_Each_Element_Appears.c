#include <stdio.h>

void countFrequency(int arr[], int n) {
    int visited[n];
    for(int i=0;i<n;i++)
       visited[i]=0;

    for(int i=0;i<n;i++) {
        if(visited[i]==1) continue;
         int count=1;
            for(int j=i+1;j<n;j++) {
                if(arr[i]==arr[j]) {
                count++;
                visited[j]=1;
            }
        }
        printf("%d appears %d times\n", arr[i], count);
    }
}

int main() {
    int arr[6];
        printf("Enter 6 numbers: ");
    for(int i=0;i<6;i++) 
        scanf("%d",&arr[i]);
        countFrequency(arr,6);
    return 0;
}
