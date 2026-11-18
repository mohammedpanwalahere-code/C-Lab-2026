#include <stdio.h>
#include<string.h>
int main(){
    char text[200];
    printf("Enter the text: ");
    scanf(" %[^\n]",text);
    printf("Length is %d\n", strlen(text));
    char text2[200];
    printf("Enter the text2: ");
    scanf(" %[^\n]",text2);
    strcat(text2,text);
    char cpy[200];
    strcpy(cpy,text);
    printf("Concated string is %s\n", text2);
    printf("Copied string is %s\n",cpy);

    printf("Reversed string is %s", strrev(text));

    return 0;
}
