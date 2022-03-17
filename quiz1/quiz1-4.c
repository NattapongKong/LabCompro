// ให้นักศึกษาเขียนโปรแกรมรับชื่อ-สกุล แล้วโปรแกรมก็แสดงผลชื่อใหม่ โดยนำ 3 ตัวแรกของสกุลมาเป็น 3 ตัวแรกของชื่อใหม่ตามด้วยอักษร “KMITL”และปิดท้ายด้วย 3 ตัวแรกของชื่อที่ป้อน ดังตัวอย่าง
//----------------------------------
// Enter full name : Somchai Boonme
// Result is BooKMITLSo

#include <stdio.h>
#define size 20
int main(){
    char name[size],surname[size];
    printf("Enter full name : ");
    scanf("%s %s",name,surname);
    printf("Result is %.3sKMITL%.2s",surname,name);
    return 0;
}