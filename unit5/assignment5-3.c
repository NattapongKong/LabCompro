#include <stdio.h>
int main(){
    int size = 0;
    printf("Enter size of rectangle : ");
    scanf("%d",&size);
    if(size > 0){

        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                if(j >= size-i){
                    printf("/");
                }
                else{

                    printf(".");
                }
            }
            printf("\n");
        }
    }
    else{
        printf("This is impossiple!");
    }
    return 0;
}