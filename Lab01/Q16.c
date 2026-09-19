#include <stdio.h>

int main() {
    printf("Enter three numbers:");
    int arr[3];
    scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
    int max = arr[0];
    for (int i = 1; i <= 2; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("Max = %d", max);
    return 0;
}
