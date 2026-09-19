#include <stdio.h>
#include <math.h>

int main() {
    int n, original, remainder, result = 0;
    printf("Enter number: ");
    scanf("%d", &n);
    
    
    original = n;
    while (original != 0) {
        remainder = original % 10;
        result += pow(remainder, 3);
        original = original/10;
    }
    
    if (result == n)
        printf("%d is an Armstrong number.\n", n);
    else
        printf("%d is not an Armstrong number.\n", n);
        
}
