#include <stdio.h>

int main() {
    printf("Enter a character");
    char ch;
    scanf("%c", &ch);
    if (ch > 'a' && ch < 'z') {
        printf("small letter");
    } else {
        printf("Not a small letter");
    }
}
