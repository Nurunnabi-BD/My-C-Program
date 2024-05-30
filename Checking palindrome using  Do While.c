#include<stdio.h>
int main()
{
    int num, r, flag, sum=0;
    scanf("%d", &num);
    flag=num;
    do
    {
        r=num%10;
        sum=sum*10+r;
        num=num/10;
    }
    while(num>0);
    if(sum==flag)
        printf("'%d' is Palindrome", sum);
    else
        printf("'%d' is not Palindrome", sum);
    return 0;
}
