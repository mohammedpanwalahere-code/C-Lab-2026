#include <stdio.h>

int main() {
    printf("Enter sales value: ");
    int n;
    float comm;
    scanf("%d", &n);
    if (n <= 500) {
        comm = n * 5 / 100;
    } else if (n > 500 && n <= 2000) {
        comm = 35 + (n - 500) / 10.0;
    } else if (n > 2000 && n <= 5000) {
        comm = 185 + ((n - 2000) * 12) / 100;
    } else {
        comm = 12.5 * n / 100;
    }
    printf("%f", comm);
}
