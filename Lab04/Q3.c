#include<stdio.h>
#include<ctype.h>
int main(){
    char text[200];
    printf("Enter the text: ");
    scanf(" %[^\n]",text);
    int count=0;
    char vowels[7] ={'a','e','i','o','u'};
    for(int i=0;text[i]!='\0';i++){

        for(int j=0;j<7;j++){
            if(tolower(text[i])==vowels[j]){
                count++;
                j=7;
            }
        }
    }

    printf("%d vowels are present", count);
}