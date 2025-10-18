#include <stdio.h>

int countFail(int marks[], int n) {
    int fail = 0;
    for(int i = 0; i < n; i++)
        if(marks[i] < 40)
            fail++;
    return fail;
}

int main() {
    int marks[6];
    printf("Enter marks of 6 students: ");
    for(int i = 0; i < 6; i++)
        scanf("%d", &marks[i]);
    printf("Failing Students = %d\n", countFail(marks, 6));
    return 0;
}
