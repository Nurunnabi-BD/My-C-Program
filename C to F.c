#include<stdio.h>
int main()
{
    float Celsius, Fahrenheit ;
    printf("Celsius=");
    scanf("%f", &Celsius );
    Fahrenheit=(Celsius*1.8)+32 ;
    printf("Fahrenheit=%f", Fahrenheit);
    return 0;
}
