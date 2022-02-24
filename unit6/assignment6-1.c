#include <stdio.h>
int main(){
    int floor,baseLength;
    printf(" *** Show isosceles triangle *** \n");
    printf("Enter a counting number : ");
    scanf("%d",&floor);
    
    if(floor >= 3){
    printf("Output : \n");
        baseLength =  (2*(floor)) - 1;
        for(int i = floor; i > 0; i--){
            for(int j = 0;j < baseLength;j++){
                if(j >= i - 1 && j < baseLength - (i-1)){

                    printf("*");
                }
                else{
                    printf(" ");
                }
                
            }
            printf("\n");
        }
    }
    else{
        printf(" --- Incorrect number. ---");
    }
        
    return 0;
}