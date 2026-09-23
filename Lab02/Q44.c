#include<stdio.h>
int main(){
    int even=0,odd=0;
    int arr[10];
    for(int i=0;i<9;i++){
        printf("Give the value of element %d : ",i);
        scanf("%d",&arr[i]);
        
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("number of even numbers is %d\n",even);
    printf("number of odd numbers : %d",odd);
}
