#include <stdio.h>
int main(){
    int num,count,result = 1;
    printf(" *** Power ***\n");
    printf("Enter 2 Positive Integers: ");
    scanf("%d %d",&num,&count);
    if(count <= 0 ){
        printf("I can move on");
    }
    else{
        for(int i = 0;i < count;i++){
            result *= num;
            printf("%d ",num);
            if(i < count-1){
                printf("x ");
            }
        }
        printf("= %d\n",result);
    }
    
    
    return 0; 
}