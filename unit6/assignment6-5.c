//รับ expression ใด ๆ จากผู้ใช้งาน แล้วนับจำนวนวงเล็บ ว่ามีกี่วงเล็บ
#include <stdio.h>
#include <string.h>
int main(){
    int pairedBrac = 0 ,unpairedBrac = 0;
    char str[50];
    printf(" *** Count number of brackets *** \n");
    printf("Enter expression : ");
    fgets(str,50,stdin);
    str[strlen(str)-1] = '\0';
    for(int i = 0;i < strlen(str) ; i++){
        if(str[i] == '('){
            unpairedBrac++;
        }
        else if(str[i] == ')' && unpairedBrac > 0){
            unpairedBrac--;
            pairedBrac++;
        }
        else if(str[i] == ')' && unpairedBrac == 0){
            unpairedBrac++;
        }

    }
    printf("expression : %s\n",str);
    printf("length : %ld\n",strlen(str));
    if(unpairedBrac == 0 && pairedBrac > 0){
        if(pairedBrac > 1){
            printf("There are %d brackets in %s",pairedBrac, str);
        }
        else{
            printf("There is %d bracket in %s",pairedBrac, str);
        }
    }
    else if(pairedBrac == 0  && unpairedBrac == 0){
        printf("There is NO bracket in %s",str);
    }
    else if(unpairedBrac > 0){
        printf("%s ===> bracket doesn't match.",str);
    }
    return 0;
}