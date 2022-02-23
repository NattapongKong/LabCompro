//finding prime numbers program in specific range
#include <stdio.h>
int main(){
    int start,finish,range[2],total = 0;
    
    printf(" *** Show prime number ***\n");
    printf("Enter 2 positive numbers : ");
    scanf("%d %d", &range[0] , &range[1]);
    start = (range[0] < range[1]) ? range[0] : range[1];
    finish = (range[0] < range[1]) ? range[1] : range[0];
    printf("\nprime number(s) from %d to %d :",start,finish);

    for(int i = start; i <= finish; i++){
        if(i == 2){
            printf(" %d",i);
            total++;
        }
        for(int j = 2; j < i; j++){
            if(i % j == 0 && j != i){
                break;
            } 
            else if(j == i-1){
                printf(" %d",i);
                total++;
            }
        }
    }
    printf("\ntotal prime numbers : %d\n",total);
    return 0;
}