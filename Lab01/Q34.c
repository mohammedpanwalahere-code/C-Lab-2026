#include <stdio.h>

int main() {
    int a = 1, b = 1, p;
    int c;
    printf("Enter the number :");
    scanf("%d", &p);
    for (int i = 1; i <= p; i++) {
        c = a + b;
        printf("%d", a);
        a = b;
        b = c;
    }
}
