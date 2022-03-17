// ให้เขียนโปรแกรมรับตัวเลขจำนวนเต็ม 1 จำนวน ค่าตั้งแต่ 66 ถึง 91 แล้วแสดงตัวอักษรตัวก่อนหน้า 1 ตัวอักษร และรหัส ASCII ของตัวอักษรนั้น
// หมายเหตุ สามารถแสดงค่ารหัส ASCII ของจำนวนเต็ม ได้โดยใช้ %c
// ห้ามใช้คำสั่ง if
//---------------------------
// ASCII number (66-91) : 67
// Previous character --> B (66)

#include <stdio.h>
int main(){
    int ID;
    printf("ASCII number (66-91) : ");
    scanf("%d",&ID);
    printf("Previous character --> %c (%d)",ID-1,ID-1);
    return 0;
}