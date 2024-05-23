#include<stdio.h>
int main()
{
    int a=8;
    int b=5;
    int c=2;
    (a>b && a>c)? printf(a):(b>c)? printf(b) : printf(c);
    return 0;
}
