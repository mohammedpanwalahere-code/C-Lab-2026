#include <stdio.h>

int main() {
    printf("Enter a character");
    char ch;
    scanf("%c", &ch);
    if (ch > 'a' && ch < 'z') {
        printf("small letter");
    } else if (ch > 'A' && ch < 'Z') {
        printf("Upper case letter");
    } else if (ch > '0' && ch < '9') {
        printf("digit");
    } else {
        printf("special character");
    }
}
