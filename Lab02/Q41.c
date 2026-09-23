#include<stdio.h>
int main(){
    for(int i=1;i<=4;i++){
        int k=1;
        for(int j=1;j<=7;j++){
            if(i+j>=5 && j-i<=3){
                printf("%d",k);
                if(j<4){
                    k++;
                }
                else{
                    k--;
                }
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
