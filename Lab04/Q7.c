#include<stdio.h>
int main(){
    char text[200];
    printf("Enter the text: ");
    scanf(" %[^\n]",text);

    int idx;

    for(int i=0; text[i] != '\0';i++){
        int min = text[i];
        int j=i+1;
        idx = i;
        for(j =i+1; text[j] != '\0';j++){
            
            if((int)text[j]<min) {
                min = (int)text[j];
                idx =j;
            }
        }
        int temp = text[i];
        text[i]= (char)min;
        text[idx]= (char)temp;
    }


    printf("%s", text);
}

