#include <stdio.h>

int main() {
    int m, p, c, e;
    printf("Enter marks of Maths,chemistry,physics respectively");
    scanf("%d%d%d", &m, &c, &p);
    printf("Enter Marks in Entrance examination out of 100");
    scanf("%d", &e);
    printf("%d", ((m + p + c) / 2) + e);
}
