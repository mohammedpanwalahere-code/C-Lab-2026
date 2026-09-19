#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    while (n > 0) {
        sum += n % 10;
        n /= 10;
        if(n==0 && sum>9){
            n = sum;
            sum=0;
        }
    }
    
    printf("Single digit sum: %d\n", sum);
    return 0;
}
