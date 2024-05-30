#include<stdio.h>
int main()
{
    int i, n, a[100], sum=0;
    float avg;
    scanf("%d", &n);
    for(i=0; i<n; ++i)
    {
        scanf("%d", &a[i]);
        sum+=a[i];
    }
    avg=(float)sum/n;
    printf("Avg= %.2f", avg);
    return 0;
}
