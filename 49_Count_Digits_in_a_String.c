#include <stdio.h>
#include <ctype.h>

int countDigits(char str[]) {
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++)
        if(isdigit(str[i]))
            count++;
    return count;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);
    printf("Digits in string = %d\n", countDigits(str));
    return 0;
}
