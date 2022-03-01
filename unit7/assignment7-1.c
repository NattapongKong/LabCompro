// จงเขียนโปรแกรมรับค่ารัศมีของวงกลม
// ให้แสดงผลค่าเส้นผ่านศูนย์กลาง เส้นรอบวง และพื้นที่ของวงกลม
// โดยห้ามแก้ไข code ด้านล่าง ให้เพิ่มตัว function ให้สมบูรณ์

#include<stdio.h>
#define PI 3.1416

void Cal_Circle(int);
int main() 
{
  	int rad1;
  	printf("Input Radius of Circle (mm) : ");
   	scanf("%d",&rad1);
	Cal_Circle(rad1);
	return 0;
}
//เพิ่ม code ด้านล่าง

Cal_Circle(int rad){
    printf("Diameter = %d mm\n",rad * 2);
    printf("Circumference = %.2f mm\n",2 * PI * rad);
    printf("Aera = %.2f mm2\n",PI * rad * rad);
    
}