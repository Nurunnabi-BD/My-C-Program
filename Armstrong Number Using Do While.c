#include<stdio.h>
#include<math.h>
int main()
{
    int num, r, flag, sum=0;
    scanf("%d", &num);
    flag=num;
    do{
        r=num%10;
        sum+=pow(r,3);
        num=num/10;
    }
    while(num>0);
    if(flag==sum)
        printf("Armstrong Number");
    else
        printf("Not Armstrong Number");
    return 0;
}
