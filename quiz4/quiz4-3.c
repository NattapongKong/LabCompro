// write the pyramid pattern program in c
//      *
//     ***
//    *****
//   *******
//  *********
#include <stdio.h>
int main()
{
    int i, j, num;
    printf(" *** Show isosceles triangle *** \n");
    printf("Enter a counting number : ");
    scanf("%d", &num);

    if (num > 3)
    {
        printf("Output : \n");
        for (i = 1; i <= num; i++)
        {
            for (j = 1; j <= num - i; j++)
            {
                printf(" ");
            }
            for (j = 1; j <= 2 * i - 1; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    else
    {
        printf(" --- Incorrect number. --- ");
    }
    return 0;
}
