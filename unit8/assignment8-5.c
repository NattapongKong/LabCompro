// เขียนโปรแกรมรับ ข้อมูลนักเรียน 10 คน โดยนักเรียนแต่ละคนมีข้อมูลดังนี้ 

// เลขประจำตัว ชื่อ คะแนน


// แล้วหาว่า มีกี่คนได้คะแนนสูงสุด ใครบ้าง

// แล้วแสดงผลออกมาตามตัวอย่าง

//  *** Structure Array 2 ***
// Enter data : 99011234 Somsak 99
// 99012456 Pracha 44
// 99019876 Suraphon 86
// 99011233 Somsri 99
// 99022456 Pisanu 78
// 99039876 Sriracha 66
// 99049234 Gulf 99
// 99012756 Energy 43
// 99019806 Pronpan 36
// 99013876 Somkid 13


//  *** Analyzing Data ***
// Max marking   = 99 points, 3 students.
// 1. 99011234 Somsak 99
// 2. 99011233 Somsri 99
// 3. 99049234 Gulf 99

#include <stdio.h>
#define size 10
struct student
{
    char id[9];
    char name[40];
    int marking;
};
int main(){
    printf(" *** Structure Array 2 ***\n");
    struct student st[size];
    int max = 0,stdCount = 0,maxcount = 0,stdID[size];
    printf("Enter data : ");
    for(int i=0;i<size;i++) {
        scanf("%s %s %d",st[i].id,st[i].name,&st[i].marking);
    }
    printf("\n\n *** Analyzing Data ***\n");
    for(int i = 0;i < size; i++){
        if (st[i].marking >= max){
            max = st[i].marking;
        }
        if(i == size - 1){
            for(int j = 0; j < size;j++){
                if(st[j].marking == max){
                    stdCount++;
                }
            }
        }
    }
    printf("Max marking   = %d points, %d students.\n",max,stdCount);
    for(int i = 0; i < size; i++){
        if(st[i].marking == max){
            maxcount++;
            printf("%d. %s %s %d\n",maxcount,st[i].id,st[i].name,st[i].marking);
        }
    }
    return 0;
}