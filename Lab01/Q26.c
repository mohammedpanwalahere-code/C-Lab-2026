#include <stdio.h>

int main() {
    printf("Enter vaule of number: ");
    int n, sume = 0, sumo = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i = i + 2) {
        sumo += i;
    }
    for (int i = 2; i <= n; i = i + 2) {
        sume += i;
    }
    printf("Sum of even is %d and sum of odd is %d", sume, sumo);
}
