#include<stdio.h>
#include<math.h>
int main()
{
    int num, r, flag, sum=0;
    scanf("%d", &num);
    flag=num;
    while(num>0)
    {
        r=num%10;
        sum+=pow(r,3);
        num=num/10;
    }
    if(sum==flag)
        printf("Armstrong Number");
    else
        printf("Not Armstrong Number");
    return 0;
}
