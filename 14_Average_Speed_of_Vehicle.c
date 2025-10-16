#include <stdio.h>
float average(int s[], int n){
    int total = 0;
        for(int i = 0; i < n; i++) total += s[i];
            return (float)total/n;
}
int main(){
    int speed[5];
            printf("Enter speed readings: ");
                for(int i = 0; i < 5; i++) scanf("%d", &speed[i]);
                    printf("Average Speed = %f km/h", average(speed,5));
}
