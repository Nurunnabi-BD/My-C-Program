#include<stdio.h>
#include<math.h>
int main()
{
    int n, x, i, f=1;
    float sum=1;
    printf("X Value:");
    scanf("%d", &x);
    printf("N value: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        f*=i;
        sum+=pow(x, i)/f;
    }
    printf("%0.2lf", sum);
    return 0;
}

