#include <stdio.h>
#include <ctype.h>
int main(){
    int size=0;
    char name[20] = {};
    printf("Enter your name : ");
    scanf("%s",&name);
    for(int i = sizeof(name);i >= 0; i--){
        if(name[i] != '\0' && i != sizeof(name)){
            printf("%c\n",toupper(name[i]));
            size++;
        }
    }
    printf("Name length : %d",size);
    return 0;
}