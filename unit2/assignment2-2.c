#include <stdio.h>
int main()
{
    int c;

    printf(" *** Show a number in variety formats. *** \n");
    printf("Enter integer : ");
    scanf("%d", &c);
    printf("Char    -> %c\n", c);
    printf("Float   -> %.2f\n", c * 1.00);
    printf("Int*2.5 -> %.4f\n", c * 2.5);
    return 0;
}