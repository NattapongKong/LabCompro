//รับตัวเลข 10 ตัว  แล้วพิมพ์เฉพาะเลขที่มีค่ามากกว่า 5 แล้วแสดงผลดังตัวอย่าง
#include <stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter numbers : ");
    for(i=1;i<=10;i++)
    {
        scanf("%d",&n);
        if(n>5)
        {
            printf("%d\n",n);
            sum=sum+n;
        }
    }
    return 0;
}