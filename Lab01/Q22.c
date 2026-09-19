#include <stdio.h>

int main() {
    printf("Enter Number:");
    int n;
    scanf("%d", &n);
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    printf("%d", fact);
}
