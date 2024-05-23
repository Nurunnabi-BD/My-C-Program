#include<stdio.h>
int main()
{
    int num1=0, num2=1, sum=0, n, i, newNum;
    printf("Enter Number = ");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        if(i<=1)
        {
            newNum=i;
        }
        else{
            newNum = num1 + num2;
            num1 = num2;
            num2 = newNum;
        }
        sum+=newNum;
    }
    printf("%d\n", sum);
    return 0;
}
