#include<stdio.h>
#include<math.h>
int main ()
{
    int n, r, sum=0, flag;
    scanf("%d", &n);
    flag=n;
    for(n; n>0; n=n/10)
    {
        r=n%10;
        sum+=pow(r,3);
    }
    if(sum==flag)
        printf("Armstrong Number");
    else
        printf("Not Armstrong Number");
    return 0;
}
