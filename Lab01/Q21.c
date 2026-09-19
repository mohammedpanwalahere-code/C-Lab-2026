#include <stdio.h>

int main() {
    printf("Enter number then sign respectively");
    int n1, n2;
    char ch;
    scanf("%d", &n1);
    scanf("%c", &ch);
    scanf("%d", &n2);

    switch (ch) {
        case ('+'):
            printf("%d", n1 + n2);
            break;
        case ('-'):
            printf("%d", n1 - n2);
            break;
        case ('*'):
            printf("%d", n1 * n2);
            break;
        case ('/'):
            printf("%d", n1 / n2);
            break;
        default:
            printf("Invalid input");
    }
    return 0;
}
