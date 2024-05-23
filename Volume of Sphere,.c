#include<stdio.h>
int main()
{
    float r, pai, V;
    pai=3.1416;
    printf("Radius=");
    scanf("%f", &r);
    V=((float) 4/3*(pai*r*r*r));
    printf("Volume=%f", V);
    return 0;
}
