#include<stdio.h>
int main()
{
    float celsius, Fahrenheit ;
    printf("Fahrenheit=");
    scanf("%f", &Fahrenheit );
    celsius=(Fahrenheit-32)/1.8 ;
    printf("Fahrenheit to Celsius=%f", celsius);
    return 0;
}
