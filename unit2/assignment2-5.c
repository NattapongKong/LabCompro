#include <stdio.h>
#include <string.h>
int main()
{
    int number;
    char charector[6];
    printf("Enter magic number : ");
    scanf("%d", &number);
    sprintf(charector, "%d", number);
    printf("+1      : %d\n", number + 1);
    printf("-1      : %d\n", number - 1);
    printf("First 3 : ");
    for (int i = 0; i < strlen(charector); i++)
    {
        if (i < 3)
        {
            printf("%c", charector[i]);
        }

        else if (i >= strlen(charector) - 3)
        {
            if (i == 3)
            {
                printf("\nLast 3  : ");
            }
            printf("%c", charector[i]);
        }
    }

    return 0;
}