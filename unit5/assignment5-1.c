#include <stdio.h>
int main(){
    int num,count,result = 1;
    printf("Enter 'number' and 'count' : ");
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
        printf("= %d",result);
    }
    
    
    return 0; 
}