// ให้โปรแกรมรับเลขทศนิยม 3 จำนวน แล้วแสดงค่ายกกำลังสอง ของแต่ละตัว แบบทศนิยม 3 ตำแหน่ง
// ให้สังเกตุ รูปแบบการแสดงผลของ output ด้วย
//------------------
// input  : 1 2 3
// Square :  1.000  4.000 9.000
#include <stdio.h>
#define size 3
int main(){
    float input[size];
    printf("input  : ");
    scanf("%f %f %f",&input[0],&input[1],&input[2]);
    printf("Square :");
    printf(" %6.3f %6.3f %-6.3f",input[0]*input[0],input[1]*input[1],input[2]*input[2]);
    return 0;
}
