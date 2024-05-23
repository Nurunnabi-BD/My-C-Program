#include<stdio.h>
int main ()
{
    int x, y, z;
    printf("Enter your first angle: ");
    scanf("%d", &x);
    printf("Enter your second angle: ");
    scanf("%d", &y);
    printf("Enter your third angle: ");
    scanf("%d", &z);
    if(x+y+z==180 && x>0 && y>0 && z>0)
        printf("Triangle is valid.");
    else
        printf("Triangle is not valid.");
    return 0;
}
