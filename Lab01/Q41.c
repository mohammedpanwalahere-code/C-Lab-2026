#include <stdio.h>
#include <math.h>

int main() {
    printf("Enter vaule of number: ");
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= sqrt(n); i++) {
        printf("%d %d", i, n / i);
    }
}
