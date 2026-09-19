#include <stdio.h>

int main() {
    int h, s, m;
    printf("Enter hours, minutes, seconds respectively");
    scanf("%d%d%d", &h, &m, &s);
    printf("%d", h * 60 * 60 + m * 60 + s);
}
