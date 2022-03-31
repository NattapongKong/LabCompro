//ให้เขียนโปรแกรมแสดงอักษรเรียงลำดับและตามด้วยระหัส ASCII ของอักษรตัวสุดท้ายของแถวนั้น โดยจำนวนแถวมีขนาดตามตัวเลขที่ป้อน 
//Enter a number : 5
// ABCDE 70
// BCDEF 71
// CDEFG 72
// DEFGH 73
// EFGHI 74

#include <stdio.h>


int main(){
    int n,i,j;
    printf("Enter a number : ");
    scanf("%d", &n);
    for(int i = 0; i < n;i++){
        for(j = 65+i; j < 65+n+i; j++){
            printf("%c", j);
            if(j == 65+n+i-1){
                printf(" %d",65+n+i);
            }
        }
        printf("\n");
    }
    return 0;
}