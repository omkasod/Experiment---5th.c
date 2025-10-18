#include <stdio.h>

int lowBattery(int battery[], int n) {
    int count = 0;
    for(int i = 0; i < n; i++)
        if(battery[i] < 20)
            count++;
    return count;
}

int main() {
    int battery[8];
    printf("Enter battery level of 8 robots (in %%): ");
    for(int i = 0; i < 8; i++)
        scanf("%d", &battery[i]);
    printf("Robots with Low Battery (<20%%): %d\n", lowBattery(battery, 8));
    return 0;
}
