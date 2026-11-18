#include<stdio.h>
int main(){
    char text[200];
    printf("Enter the text: ");
    scanf(" %[^\n]",text);

    for(int i=0; text[i]!='\0';i++){

        text[i] = (int)text[i] - 32;
    }

    printf("%s", text);
}