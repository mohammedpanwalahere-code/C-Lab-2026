#include<stdio.h>
int main(){
    char text[200];
    printf("Enter the text: ");
    scanf(" %[^\n]",text);

    int j=0;
    for(int i=0; text[i] != '\0';i++){
        j++;
    }

    j--;
    int i=0;
    for(i =0;i<j;i++,j--){
        if(text[i] != text[j]){
            printf("Not palindrome !!!");
            break;
        }
    }

    if(i>=j) printf("Palindrome !!!!!!!!!!!!!!!!!!!!!!!!1");
}