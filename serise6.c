#include<stdio.h>
#include<math.h>
int main()
{
    int n, x, i;
    float sum=0;
    printf("X Value:");
    scanf("%d", &x);
    printf("N value: ");
    scanf("%d", &n);
    for(i=0; i<=n; i++)
    {
        sum+=1/pow(x, i);
    }
    printf("%.2lf", sum);
    return 0;
}
