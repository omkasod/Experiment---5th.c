#include <stdio.h>

float percentage(int marks[], int n) {
    int total = 0;
    for(int i = 0; i < n; i++)
        total += marks[i];
    return (float)total / (n * 100) * 100;  
}

int main() {
    int marks[5];
        printf("Enter marks of 5 subjects: ");
    for(int i = 0; i < 5; i++)
        scanf("%d", &marks[i]);
         printf("Percentage = %.2f%%\n", percentage(marks, 5));
    return 0;
}
