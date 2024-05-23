#include<stdio.h>
int main()
{
    int num1=0, num2=1, n, i, newNum;
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
        printf("%d ", newNum);
    }
    return 0;
}
