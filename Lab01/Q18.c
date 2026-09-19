#include <stdio.h>

int main() {
    int n1, n2, n3;
    printf("Enter three numbers:");
    scanf("%d%d%d", &n1, &n2, &n3);
    n1 > n2 && n1 > n3 ? printf("Max is %d", n1) : (n2 > n1 && n2 > n3 ? printf("Max is %d", n2) : printf("Max is %d", n3));
}
