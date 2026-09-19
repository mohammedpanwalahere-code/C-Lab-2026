#include <stdio.h>

int main() {
    int n, num, max, min;
    printf("Enter number of elements to count upto: ");
    scanf("%d", &n);
    
    printf("Enter first number : ");
    scanf("%d", &num);
    max = min = num;
    
    for (int i = 2; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        if (num > max) max = num;
        if (num < min) min = num;
    }
    
    printf("Maximum = %d\nMinimum = %d\n", max, min);
}
