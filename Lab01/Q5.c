#include <stdio.h>

int main() {
    int a, b, temp;
    printf("Enter a:");
    scanf("%d", &a);
    printf("Enter b:");
    scanf("%d", &b);
    printf("Swapping........\n");
    temp = a;
    a = b;
    b = temp;
    printf("a=%d,b=%d", a, b);
    return 0;
}
