#include<stdio.h>
int main(){
    char text[200];
    printf("Enter the text: ");
    scanf(" %[^\n]",text);
    printf("Enter the character to find: ");
    char c;
    scanf(" %c",&c);
    bool check = false;
    for(int i=0; text[i]!='\0';i++){
        if(text[i] == c){
            check = true;
            printf("The character is present");
            break;
        }
    }
    if(check == false) printf("Not present");
}
