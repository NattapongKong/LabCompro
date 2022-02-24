/*กำหนดให้รับตัวแปร 2 ตัว คือ x และ y โดยที่ทั้งสองเป็นจำนวนเต็มบวก

จากนั้นให้หาเลขจำนวนเต็มบวกสามตัวคือ a ,b และ c

โดยที่มีเงื่อนไขว่า

    x = a * b

    y = b * c

จากนั้นแสดงตัวเลข a b c ทั้งหมดที่เป็นไปได้ในรูปแบบ 

(a ,b ,c)

(a ,b ,c)

(a ,b ,c)

และบรรทัดสุดท้ายแสดงจำนวนผลลัพธ์ทั้งหมด*/

#include <stdio.h>
int main(){
    int x,y,range[2],total = 0;
    printf("Enter x , y : ");
    scanf("%d %d",&x,&y);
    range[0] = (x < y) ? x : y;
    range[1] = (x < y) ? y : x;
    printf("Output\n");
    for(int a = 0;a <= range[1]; a++){
        for(int b = 0; b <= range[1];b++){
            for(int c = 0; c <= range[1]; c++){
                if(a * b == x && b * c == y){
                    printf("(%d,%d,%d)\n",a,b,c);
                    total++;
                }
            }
        }
    }
    printf("total = %d\n",total);
    return 0;
}