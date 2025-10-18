#include <stdio.h>
#include <string.h>

int countWords(char str[]) {
    int count = 1;
    for(int i = 0; i < strlen(str); i++)
        if(str[i] == ' ')
            count++;
    return count;
}

int main() {
    char str[200];
        printf("Enter a sentence: ");
        gets(str);
        printf("Total Words = %d\n", countWords(str));
    return 0;
}
