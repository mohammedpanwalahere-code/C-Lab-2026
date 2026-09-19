#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers a and b respectively: ");
    scanf("%d %d", &a, &b);
    
    a = a + b;
    b = a - b;
    a = a - b;
    
    printf("Now : a = %d, b = %d\n", a, b);
    return 0;
}
