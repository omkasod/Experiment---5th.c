#include <stdio.h>

void printHighSpeed(int s[], 
    int n, 
    int limit){
    for(int i=0;i<n;i++)
        if(s[i] > limit)
            printf("%d ", s[i]);
}

int main(){
    int speed[6];
        printf("Enter 6 motor speeds (RPM): ");
    for(int i=0;i<6;i++) 
        scanf("%d", &speed[i]);
         printf("Speeds above 1000 RPM: ");
        printHighSpeed(speed, 6, 1000);
        return 0;
}
