// รับเลขจำนวนเต็ม 3 จำนวน a1, a2 และ n

// แสดงผล ลำดับฟิโบแนนซิ ดังนี้


// input a1 a2 n
// output is the series of fibonacci numbers

#include <stdio.h>
#include <stdlib.h>


int main(){
    int a1, a2, n;
    printf("******** Fibonacci series ********\n");
    printf("*  A(1) and A(2) are assigned.   *\n");
    printf("*     A(n) = A(n-1) + A(n-2)     *\n");
    printf("*--------------------------------*\n");
    printf("\n");
    printf("Enter A1 A2 n : ");
    scanf("%d %d %d", &a1, &a2, &n);
    int i, temp;
    printf("\n");
    for (i = 0; i < n; i++){
        if (i == 0){
            printf("%d ", a1);
        }
        else if (i == 1){
            printf("%d ", a2);
        }
        else {
            temp = a1 + a2;
            printf("%d ", temp);
            a1 = a2;
            a2 = temp;
        }
        
    }
    return 0;
}
