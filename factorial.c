#include<stdio.h>
int main()
{
    int n, i;
    long long int sum=1;
    scanf("%d", &n);
    for(i=1; i<=n; ++i)
    {
        sum*=i;
    }
    printf("%d", sum);
    return 0;
}
