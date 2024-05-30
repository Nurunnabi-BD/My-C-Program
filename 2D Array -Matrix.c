#include<stdio.h>
int main()
{
    int a[100];
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<2; j++)
        {
            scanf("%d", &a[i],&a[j]);
        }
    }
    return 0;
}
