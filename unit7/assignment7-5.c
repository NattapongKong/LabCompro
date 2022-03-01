// นักศึกษาทำบัตรประชาชนหาย และขี้เกียจไปทำใหม่ นักศึกษาจึงได้ตัดสินใจ
// เขียนโปรแกรมให้พิมพ์บัตรออกมาใหม่แทน โดยลักษณะของบัตรคือ

// 1. แสดงชื่อ
// 2. แสดงอายุ
// 3. แสดงอาชีพ

// INPUT
// ตัวอักษรชุดนึง ตัวเลข และตัวอักษรอีกชุดนึง ตามลำดับ
// สมมติว่าตัวอักษรที่ใส่เข้ามาจะไม่ยาวเกินบัตรแน่ ๆ
// * บัตรมีขนาด 22 x 6 ช่อง ใช้ตัวอักษร 4 ตัวนี้ในการสร้าง ( = ) ( - ) ( : ) ( | )

// ปล. แสดงให้เหมือนเป๊ะ ๆ นะ
// เอาโค้ดข้างล่างนี้ไปเขียนต่อนะ เพิ่มได้ ลดไม่ได้


#include <stdio.h>
#include <string.h>
#define wide 22
#define height 6

void print_id_card(char name[], char job[], int age);

int main()
{
    /* CODE HERE */
    char name[19],job[19];
    int age;
    printf("Enter name, age, job : ");
    scanf("%s %d %s",name ,&age ,job); 
    print_id_card(name,job,age);
}
print_id_card(char name[],char job[],int age[]){
    int digit = age,count = 0;
    do {
        digit /= 10;
        ++count;
    } while (digit != 0);
                            
    for(int i = 0; i < height; i++){
            switch (i)
            {
                case 0:
                case height - 1:
                    for(int j = 0; j < wide; j++){
                        printf("=");
                    }
                    break;  
                case 1:
                case 3:
                case 4:
                    for(int j = 0;j < wide;j++){
                        switch (i)
                        {
                        case 1:
                            /* code */
                            if(j == 0 || j == (wide - strlen(name))){
                                printf("|");
                            }
                            else if(j == 2){
                                printf("%s",name);
                            }
                            else{
                                printf(" ");
                            }
                            break;
                        case 3:
                            if(j == 0 || j == (wide - (count + 7))){
                                printf("|");
                            }
                            else if(j == 1){
                                printf(" Age : %d",age);
                            }
                            else{
                                printf(" ");
                            }
                            break;
                        case 4:
                            if(j == 0 || j == (wide - (strlen(job)+7))){
                                printf("|");
                            }
                            else if(j == 1){
                                printf(" Job : %s",job);
                            }
                            else{
                                printf(" ");
                            }
                            break;
                        }
                    } 
                    break;
                case 2:
                    for(int j = 0;j < wide; j++){
                        if(j == 0 || j == (wide - 1)){
                            printf("|");
                        }  
                        else if(j==1 || j == wide - 2){
                            printf(" ");
                        }
                        else{
                            printf("-");
                        }
                    }
                    break;
            }
        printf("\n");
    }   
}