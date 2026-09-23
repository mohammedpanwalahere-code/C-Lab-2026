#include<stdio.h>
int main(){
    for(int i=1;i<=5;i++){
        int numb =1;
        for(int j=1;j<=5;j++){
            if(j>=6-i){
                printf("%d",numb);
                numb++;
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
