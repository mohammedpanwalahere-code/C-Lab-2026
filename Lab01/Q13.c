#include <stdio.h>

int main() {
    printf("Enter number to check:");
    int numb;
    scanf("%d", &numb);
    if (numb % 2 == 0) {
        printf("Even");
    } else {
        printf("odd");
    }
}
