// จงเขียนโปรแกรมที่รับค่าความกว้างของฐานและ ความสูง ของรูปสามเหลี่ยมเพื่อนำไปคำนวณหาพื้นที่รูปสามเหลี่ยม


// หากพื้นที่มากกว่า 100 ให้แสดงข้อความว่า "Area over 100 units."

#include <stdio.h>

int main(){
    float width, height;
    printf("Enter width and height : ");
    scanf("%f %f", &width , &height);
    float area = 0.5 * width * height;
    printf("Area is %.2f\n", area*1.0);
    if (area > 100) {
        printf("Area over 100 units.");
    }
    return 0;
}
