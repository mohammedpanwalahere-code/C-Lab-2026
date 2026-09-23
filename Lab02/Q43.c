#include<stdio.h>
int main(){
    int sum=0;
    int arr[10];
    for(int i=0;i<9;i++){
        printf("Give the value of element %d :",i);
        scanf("%d",&arr[i]);
        sum += arr[i];
    }
    printf("sum is %d",sum);
}
