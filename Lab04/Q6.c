#include<stdio.h>
int main(){
    char text[200];
    printf("Enter the text: ");
    scanf(" %[^\n]",text);

    int ch=0, words=0;

    for(int i=0; text[i] != '\0';i++){

        if(text[i] ==' ') words ++;

        else ch++;
    }

    printf("Words are %d and chracters are %d", words,ch);
}