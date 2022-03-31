// นักศึกษาก้มดูเงินที่มีเงินอยู่ในกระเป๋า พบกับธนบัตรยี่สิบบาทเพียงแค่ใบเดียว นักศึกษาจึง
// ตัดสินใจไปทำงานหารายได้เพิ่ม แค่นั้นแหละ
// * สมมติว่ามีเงินอยู่แล้ว 20 บาท

// INPUT :
// ตัวเลข 1 ตัว

// ให้นำโค้ดข้างล่างนี้ไปแก้ไขเพิ่มเติม โดย ห้ามมีการบวกเลขอยู่ใน main (ให้ไปบวกที่อื่น)

// และให้สร้างฟังก์ชันชื่อ add_money_to_wallet ซึ่ง

// ห้ามมีการ return ใด ๆ
// รับ parameter เข้ามากี่ตัวก็ได้
// ห้ามมีการ printf ภายในฟังก์ชันนี้
// Hint : pass by reference
//-----------------------------------------------
// int main()
// {
//     int wallet = 20, income;
//     printf("Enter money : ");
//     scanf("%d", &income);
//     add_money_to_wallet(/* CODE HERE */);
//     printf("My wallet -> %d", wallet);
// }
//-----------------------------------------------

#include <stdio.h>
#include <stdlib.h>
add_money_to_wallet(int *init_value,int *income){
    *init_value += *income;
}
int main(){
    int wallet = 20, income;
    printf("Enter money : ");
    scanf("%d", &income);
    add_money_to_wallet(&wallet,&income);
    printf("My wallet -> %d", wallet);
    return 0;
}