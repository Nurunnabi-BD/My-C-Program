#include<stdio.h>
int main()
{
    int num, r, sum=0;
    scanf("%d", &num);
    do
    {
        r=num%10;
        sum=sum*10+r;
        num=num/10;
    }
    while(num!=0);
    printf("%d", sum);
    return 0;
}
