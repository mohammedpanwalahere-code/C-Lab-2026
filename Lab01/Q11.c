#include <stdio.h>

int main() {
    int given;
    printf("Enter seconds:");
    scanf("%d", &given);
    int day = given / (24 * 60 * 60);
    given = given % (24 * 60 * 60);
    int hours = given / (60 * 60);
    given = given % (60 * 60);
    int minutes = given / 60;
    given = given % 60;
    printf("%d day %d hours %d minutes %d seconds", day, hours, minutes, given);
}
