#include<stdio.h>
int main()
{
    int i, n;
    scanf("%d", &n);
    for(i=5; i<=n; i++)
    {
        if(i%5==0)
            printf("%d\t", i);
    }
    return 0;
}
