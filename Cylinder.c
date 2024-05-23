#include<stdio.h>
int main()
{
    float r, h, pai, V;
    pai=3.1416;
    printf("Radius=");
    scanf("%f", &r);
    printf("Height=");
    scanf("%f", &h);
    V=pai*r*r*h;
    printf("Volume=%f", V);
    return 0;
}
