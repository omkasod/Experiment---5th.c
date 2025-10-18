#include <stdio.h>

int countSpaces(char str[]) {
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++)
        if(str[i] == ' ')
            count++;
    return count;
}

int main() {
    char str[200];
    printf("Enter a sentence: ");
    gets(str);
    printf("Spaces = %d\n", countSpaces(str));
    return 0;
}
