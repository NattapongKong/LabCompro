// รับข้อมูลเป็นตัวเลขเบอร์โทรศัพท์ 10 หลัก แล้วแสดงตัวเลข เป็นคำอ่านตามตัวอย่าง

// ทำ function number2word ให้สมบูรณ์

// ห้ามแก้ไข main function



// #include<stdio.h>

// int main() {
//     char phone_number[15],str[15]="nothing";
//     int i;
//     printf("*** Number to words ***\n");
//     printf("Enter phone number : ");
//     scanf("%s",phone_number);
//     printf("%s ==> ",phone_number);
//     for(i=0;phone_number[i] != '\0';i++) {
//         number2word(phone_number[i]-0x30,str);
//         printf("%s ",str);
//     }
//     printf("\n");
//     return 0;
// }
#include<stdio.h>
void number2word(int num,char *str) {
    switch(num) {
        case 0:
            strcpy(str,"zero");
            break;
        case 1:
            strcpy(str,"one");
            break;
        case 2:
            strcpy(str,"two");
            break;
        case 3:
            strcpy(str,"three");
            break;
        case 4:
            strcpy(str,"four");
            break;
        case 5:
            strcpy(str,"five");
            break;
        case 6:
            strcpy(str,"six");
            break;
        case 7:
            strcpy(str,"seven");
            break;
        case 8:
            strcpy(str,"eight");
            break;
        case 9:
            strcpy(str,"nine");
            break;
        default:
            strcpy(str,"nothing");
            break;
    }
}
int main() {
    char phone_number[15],str[15]="nothing";
    int i;
    printf("*** Number to words ***\n");
    printf("Enter phone number : ");
    scanf("%s",phone_number);
    printf("%s ==> ",phone_number);
    for(i=0;phone_number[i] != '\0';i++) {
        number2word(phone_number[i]-0x30,str);
        printf("%s ",str);
    }
    printf("\n");
    return 0;
}