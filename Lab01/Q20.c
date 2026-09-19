#include <stdio.h>

int main() {
    printf("Enter number with operation sign in between");
    int n1, n2;
    char o;
    scanf("%d %c %d", &n1, &o, &n2);
    switch (o) {
        case '+':
            printf("%d", n1 + n2);
            break;
        case '-':
            printf("%d", n1 - n2);
            break;
        case '*':
            printf("%d", n1 * n2);
            break;
        case '/':
            printf("%d", n1 / n2);
            break;
        default:
            printf("Invalid");
    }
}
