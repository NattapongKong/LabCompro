#include <stdio.h>
#include <ctype.h>
#define max 200
void capital(char str[max]);
void lower(char str[max]);
void title(char str[max]);
int main(){
    char str[max];
    printf("Enter a string : ");
    fgets(str,max,stdin);
    str[strlen(str) - 1] = '\0';
    capital(str);
    lower(str);
    title(str);

}
capital(char str[]){
    char capStr[max];
    int i = 0;
    do{
        capStr[i] = toupper(str[i]);
        ++i;
    }while(str[i] != '\0');
    capStr[strlen(str)] = '\0';
    printf("Capital : %s\n",capStr);
}
lower(char str[]){
    char lowerStr[max];
    int i = 0;
    do{
        lowerStr[i] = tolower(str[i]);
        ++i;
    }while(str[i] != '\0');
    lowerStr[strlen(str)] = '\0';
    printf("Small : %s\n",lowerStr);
    
}
title(char str[]){
    char titleStr[max];
    int isspace = 1;
    int i = 0;
    do{
        if(str[i] == ' '){
            isspace = 1;
        }
        else if(isspace == 1){
            titleStr[i] = toupper(str[i]);
            isspace = 0;
        }
        else{
            titleStr[i] = tolower(str[i]);
        }
        ++i;
    }while(str[i] != '\0');
    titleStr[strlen(str)] = '\0';
    printf("Title : %s\n",titleStr);
}
