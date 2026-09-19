#include <stdio.h>

int main() {
    printf("Kindly enter the following for calculating Gross Salary:\n");
    printf("Enter Base salary:");
    float bs, hr, oas;
    scanf("%f", &bs);
    printf("Enter HRA:");
    scanf("%f", &hr);
    printf("Enter Other allowances:");
    scanf("%f", &oas);
    printf("Your Gross salary is %f", bs + hr + oas);
    return 0;
}
