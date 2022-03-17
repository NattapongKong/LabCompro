// ให้โปรแกรมรับเลขทศนิยม 3 จำนวน แล้วแสดงค่ายกกำลังสอง ของแต่ละตัว แบบทศนิยม 3 ตำแหน่ง
// ให้สังเกตุ รูปแบบการแสดงผลของ output ด้วย
//------------------
// input  : 1 2 3
// Square :  1.000  4.000 9.000
#include <stdio.h>
#define size 3
int main(){
    int input[size];
    printf("input  : ");
    scanf("%d %d %d",&input[0],&input[1],&input[2]);
    printf("Square :");
    printf("%7.3f%7.3f%7.3f",input[0]*input[0]*1.00,input[1]*input[1]*1.00,input[2]*input[2]*1.00);
    return 0;
}
//ยังไม่ได้