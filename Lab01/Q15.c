#include <stdio.h>

int main() {
    printf("Enter marks of five subjects:");
    int s1, s2, s3, s4, s5;
    scanf("%d%d%d%d%d", &s1, &s2, &s3, &s4, &s5);
    int per = (s1 + s2 + s3 + s4 + s5) / 5;
    if (per >= 90) {
        printf("A division");
    } else if (per >= 80) {
        printf("B division");
    } else if (per >= 70) {
        printf("C division");
    } else if (per >= 60) {
        printf("D divison");
    } else if (per >= 50) {
        printf("E division");
    } else {
        printf("Failed");
    }
}
