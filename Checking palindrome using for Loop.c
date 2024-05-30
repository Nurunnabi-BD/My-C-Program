#include<stdio.h>
int main()
{
    int r, num, sum=0, flag;
    scanf("%d", &num);
    flag=num;
    for(num; num>0; num=num/10)
    {
        r=num%10;
        sum=sum*10+r;
    }
    //printf("%d",sum);
    if(flag==sum)
        printf("%d is Palindrome", sum);
    else
        printf("%d is not Palindrome", sum);
    return 0;
}
