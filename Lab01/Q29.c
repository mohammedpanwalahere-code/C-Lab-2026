#include <stdio.h>

int main() {
    int n, reversed = 0, lastd, original;
    printf("Enter an integer: ");
    scanf("%d", &n);
    
    original = n;
    while (n != 0) {
        lastd = n % 10;
        reversed = reversed * 10 + lastd;
        n /= 10;
    }
    
    if (original == reversed)
        printf("%d is a palindrome.\n", original);
    else
        printf("%d is not a palindrome.\n", original);
        
}
