#include <stdio.h>

int totalMarks(int marks[], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++)
        sum += marks[i];
    return sum;
}

int main() {
    int marks[5];
    printf("Enter marks of 5 subjects: ");
    for(int i = 0; i < 5; i++)
        scanf("%d", &marks[i]);
    printf("Total Marks = %d\n", totalMarks(marks, 5));
    return 0;
}
