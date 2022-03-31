// สมมุติว่าตัวเลขโชดดี (lucky number) ประจำตัวบุคคล สามารถหาได้จาก

// การนำจำนวนอักษรของชื่อหน้า บวก จำนวนอักษรของนามสกุล (ไม่รวมช่องว่าง)

// แล้วคูณด้วยอายุ (ตั้งแต่ 1 ปีขึ้นไปเท่านั้น) ของบุคคลนั้น

// ผลที่ได้คือเลขหลักสิบของผลลัพธ์ที่ได้คือเลขโชดดีของบุคคลนั้น

// โดยเขียนโปรแกรมเพื่อรับชื่อ และ อายุ แล้วแสดง lucky number

#include <stdio.h>
#include <string.h>
int main(){
    char name[20],surname[20];
    int age;
    printf("Enter name surname and age : ");
    scanf("%s %s %d", name, surname, &age);
    //count how many char in name and surname
    int name_len = strlen(name);
    int surname_len = strlen(surname);
    printf("First name = %2d digit\n", name_len);
    printf(" Last name = %2d digit\n", surname_len);
    int lucky_number = (name_len + surname_len) * age;
    printf("Yours lucky number (%d) is %d", lucky_number, (lucky_number % 100)/10);
}



