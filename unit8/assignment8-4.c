// เขียนโปรแกรมรับ ข้อมูลนักเรียน 10 คน โดยนักเรียนแต่ละคนมีข้อมูลดังนี้ 
// เลขประจำตัว ชื่อ คะแนน
// แล้วคำนวณ หา ค่าเฉลี่ย คะแนนต่ำสุด คะแนนสูงสุด
// แล้วแสดงผลออกมาตามตัวอย่าง

//  *** Structure Array ***
// Enter data : 99011234 Somsak 99
// 99012456 Pracha 44
// 99019876 Suraphon 86
// 99011233 Somsak 99
// 99022456 Pisanu 78
// 99039876 Sriracha 66
// 99049234 Gulf 99
// 99012756 Energy 43
// 99019806 Pronpan 36
// 99013876 Somkid 13


//  *** Analyzing Data ***
// Average marking = 66.300
// Min -- Max      = 13 --> 99

#include <stdio.h>
#define size 10
struct student
{
    char id[9];
    char name[40];
    int marking;
};
int main(){
    printf(" *** Structure Array 2***\n");
    float sum = 0.00;
    struct student st[size];
    
    printf("Enter data : ");
    for(int i=0;i<size;i++) {
        scanf("%s %s %d",st[i].id,st[i].name,&st[i].marking);
    }
    int  min = st[0].marking,max = 0;
    printf("\n\n *** Analyzing Data ***\n");
        for(int i = 0;i < size; i++){
        sum += st[i].marking;
    }
    printf("Average marking = %.3f\n",sum/size);
    for(int i = 0;i < size; i++){
        max = st[i].marking >= max ? st[i].marking : max;
        min = st[i].marking <= min ? st[i].marking : min; 
    }
    printf("Min -- Max      = %d --> %d",min,max);
    return 0;
}