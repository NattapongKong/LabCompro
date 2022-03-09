// รับจำนวนเต็ม 10 จำนวน 

// แล้วตรวจสอบว่า ผลต่างของจำนวนติดกัน มีค่ามากที่สุดเท่าไหร่

#include <stdio.h>
#include <stdlib.h>
#define size 10
int main(){
    int num[size],diff[size],max = 0;
    printf(" *** Maximum diference of adjacent number ***\n");
    printf("Enter 10 integers : ");
    scanf("%d %d %d %d %d %d %d %d %d %d",&num[0],&num[1],&num[2],&num[3],&num[4],&num[5],&num[6],&num[7],&num[8],&num[9]);
    for(int i = 0; i < size - 1 ; i++){
        diff[i] = abs(num[i] - num[i + 1]);
    }
    for(int j = 0;j < size - 1; j++){
        if(diff[j] >= max){
            max = diff[j];
        }
    }
    printf("Maximum differnce is %d",max);
    return 0;
}