#include<stdio.h>

int search(int arr[], int n, int key){
    for(int i = 0; i < n; i++)
        if(arr[i] == key)
        return i;
        return -1;

}

int main(){
    int arr[5], key;
        printf("Enter 5 numbers: ");
            for(int i = 0; i < 5; i++)
                scanf("%d", &arr[i]);

            printf("Enter number to search: ");
                scanf("%d", &key);

    int pos = search(arr, 5, key);
         if(pos != -1)
            printf("Element found at position: %d", pos+1);
    
        else
            printf("Element not found");
    return 0;
}
    