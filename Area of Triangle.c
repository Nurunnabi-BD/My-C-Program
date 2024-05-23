#include<stdio.h>
int main()
{
    float Base, Height, Area;
    printf("Base=");
    scanf("%f", &Base);
    printf("\nHeight=");
    scanf("%f", &Height);
    Area=0.5*Base*Height;
    printf("Area=%f", Area);
    return 0;
}
