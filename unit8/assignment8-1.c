// รับข้อมูลจำนวนเต็ม 10 จำนวน แล้ว แสดงผลเรียงจากมากไปน้อย

// แสดงผลตามตัวอย่าง


#include <stdio.h>
int main(){
    int num[10],sub;
    size_t numsize = sizeof(num) / sizeof(int);
    printf(" *** Descending sort ***\n");
    printf("Enter 10 whole numbers : ");
    scanf("%d %d %d %d %d %d %d %d %d %d",&num[0],&num[1],&num[2],&num[3],&num[4],&num[5],&num[6],&num[7],&num[8],&num[9]);
    printf("Output : ");
    for(int i = 0;i < numsize;i++){
        for(int j = i + 1; j < numsize; j++){
            if(num[i] < num[j]){
                sub = num[i];
                num[i] = num[j];
                num[j] = sub;  
            }
        }
        printf("%d ",num[i]);
    }
    return 0;
}