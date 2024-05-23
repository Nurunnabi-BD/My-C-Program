#include<stdio.h>
int main()
{
    int n, i, j, flag=0;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        if(i<2){
            continue;
        }
        flag=1;
        for(j=2; j<i/2; j++)
        {
            if(i%j==0)
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
            printf("%d ", i);
    }
    return 0;
}

