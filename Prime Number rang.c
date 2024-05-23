#include<stdio.h>
int main()
{
    int n, m, i, j, flag=0;
    printf("Enter Your First Number= ");
    scanf("%d\n", &n);
    printf("To\n");
    printf("Enter Your Last Number= ");
    scanf("%d\n", &m);
    for(i=n; i<=m; i++)
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
