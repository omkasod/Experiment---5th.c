#include <stdio.h>

int searchElement(int arr[], int n, int key) {
    for(int i = 0; i < n; i++)
        if(arr[i] == key)
            return i;
    return -1;
}

int main() {
    int arr[6], key;
    printf("Enter 6 numbers: ");
    for(int i = 0; i < 6; i++)
        scanf("%d", &arr[i]);
    printf("Enter element to search: ");
    scanf("%d", &key);
    int pos = searchElement(arr, 6, key);
    if(pos == -1)
        printf("Element not found.\n");
    else
        printf("Element found at position %d.\n", pos + 1);
    return 0;
}
