#include<stdio.h>
int main()
{
    float x, y, z;
    printf("Enter your first side: ");
    scanf("%d", &x);
    printf("Enter your second side: ");
    scanf("%d", &y);
    printf("Enter your third side: ");
    scanf("%d", &z);
    if(x+y>z && x+z>y && y+z>x)
        printf("Triangle is valid.");
    else
        printf("Triangle is not valid.");
    return 0;
}
