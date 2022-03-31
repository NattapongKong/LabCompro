// ให้เขียนโปรแกรม โดยให้มีคุณลักษณะดังนี้
// รับจำนวนเต็ม 1 จำนวน ค่าตั้งแต่ 10 ถึง 99
// ถ้า จำนวนที่รับเข้ามาไม่อยู่ในขอบเขตที่กำหนดให้แสดงผล Sorry, you're done !!!
// นำหลักหน่วยและหลักสิบมาบวกันเป็นจำนวนใหม่
// นำจำนวนใหม่มาคำนวณค่า ถ้า mod 3 ได้ 0 ให้แสดงผล Hello, do good to people for no reason.
// นำจำนวนใหม่มาคำนวณค่า ถ้า mod 3 ได้ 1 ให้แสดงผล Hello, what a wonderful world!
// นำจำนวนใหม่มาคำนวณค่า ถ้า mod 3 ได้ 2 ให้แสดงผล Hello, it is a beautiful day.


#include <stdio.h>

int main(){
    int number;
    printf(" *** Conditional Test ***\n");
    printf("Enter a number : ");
    scanf("%d", &number);
    if (number < 10 || number > 99){
        printf("You're done !!!\n");
    }
    else {
        int sum = 0;
        int i = number % 10;
        int j = number / 10;
        sum = i + j;
        if (sum % 3 == 0){
            printf("Hello, do good to people for no reason.\n");
        }
        else if (sum % 3 == 1){
            printf("Hello, what a wonderful world!\n");
        }
        else {
            printf("Hello, it is a beautiful day.\n");
        }
    }
    return 0;
}