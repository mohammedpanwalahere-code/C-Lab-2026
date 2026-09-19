#include <stdio.h>

int main() {
    printf("Enter value of number of terms: ");
    int n, old = 1;
    float sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        if (i > 0) {
            old = old * i;
        } else {
            old = 1;
        }
        sum += 1.0 / (old);
    }
    printf("%f", sum);
}
