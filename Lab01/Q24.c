#include <stdio.h>

int main() {
    printf("Enter vaule of n: ");
    int n;
    scanf("%d", &n);
    printf("Enter vaule of x: ");
    int x;
    scanf("%d", &x);
    if (n == 1) {
        printf("%d", 1 + x);
    } else if (n == 2) {
        printf("%d", 1 + (x / n));
    } else if (n == 3) {
        printf("%d", 1 + (x * x));
    } else {
        printf("%d", 1 + n * x);
    }
}
