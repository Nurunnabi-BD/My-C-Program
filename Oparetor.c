#include<stdio.h>
int main()
{
    int a=-13, b=3;
    a/=~(++a - a++);
    printf("%d\n%d", a|b, a<<1);
    return 0;
}
