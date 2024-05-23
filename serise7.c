#include<stdio.h>
#include<math.h>
int main()
{
    int n, x, i;
    float sum=1;
    printf("X Value:");
    scanf("%d", &x);
    printf("N value: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        sum+=pow(x, i)/i;
    }
    printf("%0.2lf", sum);
    return 0;
}

