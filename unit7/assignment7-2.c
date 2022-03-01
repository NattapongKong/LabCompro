// สมมตินักศึกษาอยู่ในช่วงเศรษฐกิจย่ำแย่ ของทุกอย่างจะถูกบวกภาษีเพิ่ม แล้วต้องการจะซื้อของชิ้นนึง
// นักศึกษาจึงตัดสินใจหยิบ mac book pro m1 ขึ้นมาเขียนโปรแกรมคำนวณว่าซื้อชิ้นไหนถูกกว่ากัน

// INPUT :
// ตัวเลข 4 ตัว โดย 2 ตัวแรกเป็นราคาสินค้า 2 อันต่อมาเป็นเปอร์เซ็นต์ภาษีที่บวกเพิ่ม

// OUTPUT :
// สังเกตุจาก test case

// ปล. แสดงผลให้เหมือนเป๊ะ ๆ นะ

// ให้เอาโค้ดตรงนี้ไปเขียนเพิ่มเท่านั้น !!

#include <stdio.h>

float calculate(int prize, float tax);

int main()
{
    int prize1,prize2;
    float tax1,tax2;
    /* CODE INPUT HERE */
    printf("Enter 2 prizes and 2 coupons : ");
    scanf("%d %d %f %f",&prize1,&prize2,&tax1,&tax2);

    float taxed1 = calculate(prize1, tax1);
    float taxed2 = calculate(prize2, tax2);

    /* CODE OUTPUT HERE */    
    printf("Item1 %d -> %.2f\n",prize1,taxed1);
    printf("Item2 %d -> %.2f\n",prize2,taxed2);
    if (taxed1 < taxed2)
        printf("* Item1 is cheaper");
    else if (taxed1 == taxed2)
        printf("* Item1 is equal to Item2");
    else
        printf("* Item2 is cheaper");
}

float calculate(int prize, float tax)
{
    /* CODE FUNCTION HERE */
    return (prize * (1 + (tax/100)));
}