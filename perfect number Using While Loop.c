#include<stdio.h>
int main()
{
    int i=1, num, sum=0, flag;
    scanf("%d", &num);
    flag=num;
    while(i<num)
    {
        if(num%i==0)
            sum+=i;
        i++;
    }
    if(flag==sum)
        printf("Perfect Number");
    else
        printf("Not Perfect Number");
    return 0;
}
