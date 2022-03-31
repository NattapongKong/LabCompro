// สมมติว่านักศึกษาคือโจร และกำลังจะฝึกสลับกระเป๋าตังของตัวเองกับเหยื่่อ
// นักศึกษาเริ่มฝึกฝนผ่านการเขียนโปรแกรม
// โดยต้องการที่จะสลับที่ของตัวแปร 2 ตัว

// ปล. แสดงผลให้เหมือนเป๊ะ ๆ นะ

// ให้นำโค้ดข้างล่างนี้ไปแก้ไขเพิ่มเติม โดย ห้ามแก้ไข main

// และให้สร้างฟังก์ชันชื่อ swap_wallet ซึ่ง

// ห้ามมีการ return ใด ๆ
// รับ parameter เข้ามากี่ตัวก็ได้
// ห้ามมีการ printf ภายในฟังก์ชันนี้ ให้มีแค่ใน main เท่านั้น
// Hint: pass by referrence

//--------------------------------------------------------------
// int main()
// {
//     int my_wallet, other_wallet;
//     printf("Enter my money, other money : ");
//     scanf("%d %d", &my_wallet, &other_wallet);
//     printf("Me : %4d | Other : %4d", my_wallet, other_wallet);
//     swap_wallet(&my_wallet, &other_wallet);
//     printf("\n\n====== Whooop! ======\n\n");
//     printf("Me : %4d | Other : %4d", my_wallet, other_wallet);
// }
//----------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
void swap_wallet(int *my_wallet,int *other_wallet){
    int temp = *my_wallet;
    *my_wallet = *other_wallet;
    *other_wallet = temp;
}
int main()
{
    int my_wallet, other_wallet;
    printf("Enter my money, other money : ");
    scanf("%d %d", &my_wallet, &other_wallet);
    printf("Me : %4d | Other : %4d", my_wallet, other_wallet);
    swap_wallet(&my_wallet, &other_wallet);
    printf("\n\n====== Whooop! ======\n\n");
    printf("Me : %4d | Other : %4d", my_wallet, other_wallet);
}