#include <stdio.h>
float FtoCelsius(float F)
{
    return (F - 32) * 5 / 9;
}
int main()
{
    float f;
    printf(" *** Convert Fahrenheit to Celcius *** \n");
    printf("Enter temperature in degree Fahrenheit : ");
    scanf("%f", &f);
    printf("%.3f degree Fahrenheit equals %.3f degree celcius.", f, FtoCelsius(f));
    return 0;
}