// ให้เขียนโปรแกรม รับจำนวนเต็ม 8 หลัก 1 จำนวนแล้วแสดงผลดังนี้
// แสดงตัวเลข ที่รับเข้ามา
// แสดงขนาดของตัวแปร printf("variable size = %d bytes\n",sizeof(n));
// แสดงตัวเลข 3 หลักสุดท้าย (หลักร้อย หลักสิบ หลักหน่วย)
// แสดงตัวเลข 3 หลักถัดมา (หลักแสน หลักหมื่น หลักพัน)
// แสดงตัวเลข 2 หลักถัดมา (หลักสิบล้าน หลักล้าน)
// แสดงตัวเลข แบบมี comma คั่น 


// Hint:

// ตัวเลขจำนวนเต็ม ประเภทต่าง ๆ

// int ขนาด 4 Bytes เก็บตัวเลขได้สูงสุด 2,147,483,647

// unsigned int ขนาด 4 Bytes เก็บตัวเลขได้สูงสุด 4,294,967,295

// long ขนาด 8 Bytes เก็บตัวเลขได้สูงสุด 9,223,372,036,854,775,807

// unsigned long ขนาด 8 Bytes เก็บตัวเลขได้สูงสุด 18,446,744,073,709,551,615

#include <stdio.h>
int main(){
    int num;
    printf(" *** Display integer in different styles ***\n");
    printf("Enter an 8-digit integer : ");
    scanf("%d",&num);
    printf("Your number : %d\n",num);
    printf("variable size = %ld bytes\n",sizeof(int));
    printf("last 3 digits :%12d\n",num % 1000);
    printf("next 3 digits :%12d\n",(num % 1000000)/1000);
    printf("next 2 digits :%12d\n",num / 1000000);
    printf("comma format  :  %d,%d,%d\n",num / 1000000,(num % 1000000)/1000,num % 1000);
    

    return 0;
}