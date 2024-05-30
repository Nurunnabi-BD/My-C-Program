#include<stdio.h>
int main()
{
    int num, r;
    scanf("%d", &num);
    do
    {
        r=num%10;
        num=num/10;
        printf("%d ", r);
    }
    while(num>0);
    return 0;
}
