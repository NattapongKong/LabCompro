// จงเขียนโปรแกรม เพื่อรับข้อความ 1 บรรทัด แล้วตรวจสอบว่า เป็น ข้อความพาลินโดรมหรือไม่

//     โดยที่ตัวอักษรตัวใหญ่ และ ตัวเล็ก ถือเป็นตัวอักษรเดียวกัน

//     ตรวจสอบเฉพาะ ตัวอักษร และ ตัวเลข

//     สัญญลักษณ์พิเศษ หรือ ช่องว่าง (space) ให้ข้ามไป



// ให้ใช้ตัวแปรได้ 3 ตัวดังนี้

char str[100], *pt1, *pt2;




#include <stdio.h>
#include <string.h>


int main()
{
    char str[100];
    char *pt1, *pt2;
    printf(" *** Palindrome Verification ***\n");
    printf("Enter a sentence : ");
    fgets(str, 100, stdin);
    str[strlen(str)-1] = '\0';
    printf("\"%s\"",str);
    for(pt1 = str; *pt1 != '\0'; pt1++)
    {
        if(*pt1 >= 'A' && *pt1 <= 'Z')
        {
            *pt1 = *pt1 + 32;
        }
    }

    pt1 = str;
    pt2 = str + strlen(str) - 1;
    while(pt1 < pt2)
    {
        if(!((*pt1 >= 'A' && *pt1 <= 'Z') || (*pt1 >= 'a' && *pt1 <= 'z') || (*pt1 >= '0' && *pt1 <= '9')))
        {
            pt1++;
            continue;
        }

        if(!((*pt2 >= 'A' && *pt2 <= 'Z') || (*pt2 >= 'a' && *pt2 <= 'z') || (*pt2 >= '0' && *pt2 <= '9')))
        {
            pt2--;
            continue;
        }

        if(*pt1 != *pt2)
        {
            printf(" is NOT palindrom.");
            return 0;
        }

        pt1++;
        pt2--;
        
    }

    printf(" is PALINDROME.");
    return 0;
}
