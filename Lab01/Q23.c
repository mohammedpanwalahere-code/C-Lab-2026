#include <stdio.h>

int main() {
    printf("Enter Number: ");
    int n, answer = 1;
    scanf("%d", &n);
    printf("Enter power: ");
    int p;
    scanf("%d", &p);
    for (int i = 1; i <= p; i++) {
        answer = answer * n;
    }
    printf("%d", answer);
}
