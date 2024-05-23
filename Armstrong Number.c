#include<stdio.h>
#include<math.h>
int main ()
{
    int i, n, sum=0;
    scanf("%d", &n);
    for(i=1; i<n; i++)
    {
        if(n%i==0)
            sum+=pow(i,3);
    }
    if(sum==n)
        printf("Armstrong Number");
    else
        printf("Not Armstrong Number");
    return 0;
}
