#include<stdio.h>
int main()
{
    int i, j, n, m, flag=0;
    printf("Minimum Number= ");
    scanf("%d", &n);
    printf("Maximum Number= ");
    scanf("%d", &m);
    for(i=n; i<=m; i++)
    {
        if(i<2){
            continue;
        }
        flag=1;
       for(j=2; j<=m/2; j++)
        {
            if (i%j==0){
                flag=0;
                break;
            }
        }
        if(flag==1)
            {
                printf("%d ", i);
            }
    }
    return 0;
}
