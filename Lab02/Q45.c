#include<stdio.h>
int main(){
    int positive=0,negative=0,zero=0;
    int arr[10];
    for(int i=0;i<9;i++){
        printf("Give the value of element %d :",i);
        scanf("%d",&arr[i]);
        
        if(arr[i]>0){
            positive++;
        }
        else if(arr[i]==0){
            zero++;
        }
        else{
            negative++;
        }
    }
    printf("number of positive numbers is %d\n",positive);
    printf("number of negative numbers : %d\n",negative);
    printf("number of zero elemnts is %d",zero);
}
