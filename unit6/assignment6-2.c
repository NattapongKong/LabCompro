#include <stdio.h>
int main(){
    int floor , count = 10;
    printf("input (1-20)  : ");
    scanf("%d",&floor);
    if(floor > 0 && floor <= 20){
        for(int i = floor; i > 0; i--){
            printf("\n");
            for(int j = 0; j < floor;j++){
                printf("  %d",count - 1);
                count--;
                if(count == 1){
                count = 10;
            }
            }
            
            
        }
    }
    else{
        printf("\nNo Answer");
    }
    return 0;
}