
#include <stdio.h>
int main()
{
    int num,c=9;
    printf("input (1-20)  : ");
    scanf("%d",&num);
    printf("\n");
    if(num > 0 && num <= 20 ){
    for(int i = 0; i < num; i++){
        for(int j = 0; j < num; j++){
            printf("%3d",c);
            c--;
if(c==0){
            c=9;
        }
        }
        
        
        printf("\n",i);
    }
    }
    else{
        printf("No Answer");
    }
    return 0;
}
