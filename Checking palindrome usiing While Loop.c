#include<stdio.h>
int main()
{
    int num, r, sum=0, flag;
    scanf("%d", &num);
    flag=num;
    while(num>0)
    {
        r=num%10;
        sum=sum*10+r;
        num=num/10;
    }
    if(flag==sum)
        printf("'%d' is Palindrome", sum);
    else
        printf("'%d' is not Palindrome", sum);
    return 0;
}
