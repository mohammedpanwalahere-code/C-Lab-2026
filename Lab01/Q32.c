#include<stdio.h>
#include<limits.h>

int main(){
    int arr[8];
    int present=INT_MIN,store;

    for(int i=0;i<8;i++){
        printf("Enter Number:\n");
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<=7;i++){
        if(arr[i]>present){
            store=present;
            present=arr[i];
        }

    }

    printf("Second largest is %d",store);
}