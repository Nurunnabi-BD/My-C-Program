#include<stdio.h>
int main()
{
    int n, i, sum=0;
    scanf("%d", &n);
    for(i=1; i<n; i++)
    {
        if(n%i==0)
            sum+=i;
    }
    if(n==sum)
        printf("Perfect number");
    else
        printf("Not perfect number");
    return 0;
}
