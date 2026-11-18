#include<stdio.h>
int main(){
    char text[200];
    printf("Enter the text: ");
    scanf(" %[^\n]",text);

    int lower =0, upper=0,digits=0,spc=0;

    for(int i=0; text[i] != '\0';i++){

        if(text[i]>='0' && text[i]<='9') digits++;

        else if((int)text[i] >=65 && (int)text[i]<=90) upper++;

        else if((int)text[i] >=97 && (int)text[i]<=122) lower++;

        else spc ++;


    }

    printf(" Lower cases = %d\n Upper cases = %d\n Digits = %d\n Special symbols = %d", lower,upper,digits,spc);
}