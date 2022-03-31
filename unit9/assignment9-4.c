// นักศึกษาถูกหมอดูทักว่าชื่อไม่ค่อยมงคลเลย ถ้าเกรดจะ A ชื่อควรมีตัว A เยอะๆ
// นักศึกษาจึงได้ตัดสินใจเขียนโปรแกรมเปลี่ยนชื่อตนเองขึ้นมา ซึ่งถ้าเปลี่ยนทุกตัวเป็น A 
// มันจะอ่านไม่รู้เรื่อง จึงได้ทำการเปลี่ยนเฉพาะตัวที่เป็น 'สระ' เท่านั้น

// INPUT :
// ตัวอักษร 2 ชุด

// OUTPUT :
// ตัวอักษรทั้ง 2 ชุดจจาก input แต่เปลี่ยนสระทุก ๆ ตัวเป็น a

// ปล. แสดงให้เหมือนเป๊ะ ๆ นะ

// ให้เอาโค้ดส่วนนี้ไปต่อเติมโดยห้ามแก้ไขใน main

// #include <stdio.h>
// void mongkol(char *p);

// int main()
// {
//     char name[20];
//     printf("Enter name : ");
//     scanf("%[^\n]", &name);
//     mongkol(name);
//     printf("Mong-Kol name : %s", name);
// }

// void mongkol(char *p)
// {
//     while (*p != '\0')
//     {
//         /* CODE HERE */
//         p++;
//     }
// }

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main()
{
    char name[20];
    printf("Enter name : ");
    scanf("%[^\n]", &name);
    mongkol(name);
    printf("Mong-Kol name : %s", name);
}

void mongkol(char *p)
{
    while (*p != '\0')
    {
        if(*p =='e'||*p =='i'||*p =='o'||*p =='u')
        {
            *p ='a';
        }
        if(*p =='E'||*p =='I'||*p =='O'||*p =='U')
        {
            *p ='A';
        }
        p++;
    }
}