//จงเขียนโปรแกรมให้แสดงตัวเลขที่หารด้วย 7 ลงตัว ในช่วง 1- ค่าที่รับเข้ามา ออกมาทั้งหมด (ให้ใช้ \t คั่นระหว่างตัวเลขสองตัว) 
#include <stdio.h>
int main()
{
    int i,num;
    printf("Enter a number : ");
    scanf("%d",&num);
    for(i=1;i<num;i++)
    {
        if(i%7==0)
        {
            if(i > 7){
                printf("\t");
            }
            printf("%d",i);
        }

    }
    return 0;
}