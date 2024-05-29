#include<stdio.h>
int main()
{
    int num, i=1, sum=0, flag;
    scanf("%d",&num);
    flag=num;
    do
    {
        if(num%i==0)
            sum+=i;
        i++;
    }
    while(i<num);
    if(flag==sum)
        printf("Perfect Number");
    else
        printf("Not Perfect Number");
    return 0;
}
