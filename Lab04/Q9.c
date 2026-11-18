#include<stdio.h>
int main(){
    char text[200];
    printf("Enter the text: ");
    scanf(" %[^\n]",text);
    printf("Enter what to replace :\n");
    char w;
    scanf(" %c", &w);
    printf("\nEnter with what to replace :\n");
    char r;
    scanf(" %c", &r);

    for(int i=0; text[i] != '\0';i++){
        
        if(text[i] ==w){
            text[i] = r;
        }
    }

    printf("%s is new one ", text);
}