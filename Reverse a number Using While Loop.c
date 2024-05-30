#include<stdio.h>
int main()
{
    int num, r, sum=0;
    scanf("%d", &num);
    while(num>0)
    {
        r=num%10;
        sum=sum*10+r;
        num=num/10;
    }
    printf("%d\n", sum);
    return 0;
}
