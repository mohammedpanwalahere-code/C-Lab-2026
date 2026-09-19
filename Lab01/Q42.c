#include <stdio.h>
#include <math.h>

int main() {
    printf("Enter vaule of number: ");
    int n, i = 2;
    scanf("%d", &n);
    if (n < 2) {
        printf("Not a Prime ");
    } else {
        for (; i <= sqrt(n); i++) {
            if (n % i == 0) {
                break;
            }
        }
    }
    if (i <= sqrt(n)) {
        printf("Composite");
    } else {
        printf("Prime");
    }
}
