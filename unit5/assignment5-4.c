#include <stdio.h>
int main(){
    int num , result;
    printf("Enter number : ");
    scanf("%d" ,&num);
    if((num % 2 == 0 || num % 3 == 0) && num != 0){
        while((num % 2 == 0 || num % 3 == 0) && num != 0){
            if(num % 2 == 0){
                num /= 2;
                printf("2 ");
            }
            else if(num % 3 == 0){
                num /= 3;
                printf("3 ");
            }
            else{
                break;
            }
        }
        if(num  != 1){{
            printf("%d ",num);
        }}
    }
    else if(num < 2){
        printf(":(");
    }

    else{
        printf("%d ",num);
    }
    printf("\n");
    return 0;
}