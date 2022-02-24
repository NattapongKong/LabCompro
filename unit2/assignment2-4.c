#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char input[100];
    printf("Enter full name : ");
    scanf("%[^\n\r]", input);
    char *Name = strtok(input, " ");
    char *SurName = strtok(NULL, " ");
    printf("[ %.2s %.2s ]\n", Name, SurName);
}