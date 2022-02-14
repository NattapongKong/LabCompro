#include <stdio.h>
int main(){
    int num[4] = {};
    int max,i,j,GCD =1,LCM = 1;
    printf("Please enter five number: ");
    scanf("%d %d %d %d %d",&num[0],&num[1],&num[2],&num[3],&num[4]);
    max = num[0];
    for(i = 0;i < (sizeof(num) /4) + 1; i++){
        if(max < num[i]){
            max = num[i];
        }
    }
    for(j = 1; j < max;j++){
        if(num[0] % j == 0 && num[1] % j == 0 && num[2] % j == 0 && num[3] % j == 0 && num[4] % j == 0 ){
            if(GCD < j){
                GCD = j;
            }
        }
    }
    while (1) {
        if (max % num[0] == 0 && max % num[1] == 0 && max % num[2] == 0 && max % num[3] == 0 &&max % num[4] == 0 ) {
            LCM = max;
            break;
        }
        ++max;
    }
    printf("L.C.M is %d\n",LCM);
    printf("G.C.D is %d\n",GCD);
    
    return 0;
}
