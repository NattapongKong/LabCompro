#include <stdio.h>
#define strArr_length 4

int main()
{
    char strArr[strArr_length][20] = {"Ladkrabang.", "KMITL.", "Bangkok.", "Thailand."};
    for (int i = 0; i < strArr_length; i++)
    {
        printf("Hello, %s\n", strArr + i);
    }
    return 0;
}