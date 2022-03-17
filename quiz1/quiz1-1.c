// ให้เขียนโปรแกรมรับเลขจำนวนเต็ม 1 จำนวน แทนเงินบาท (เก็บไว้ในตัวแปรจำนวนเต็ม)

// แล้วแสดงผลอัตราแลกเปลี่ยน

// เป็นเงิน USD ด้วนอัตราแลกเปลี่ยน 1 USD : 30.65 บาท โดยแสดงผลเป็นทศนิยม 2 ตำแหน่ง

#include <stdio.h>
int main(){
    int thb;
    float usd,excRate = 30.65;
    printf(" *** Baht to US dollar converter ***\n");
    printf("Input Bath : ");
    scanf("%d",&thb);
    usd = thb/excRate;
    printf("Output USD : $%.2f",thb/30.65);
    return 0;
}
