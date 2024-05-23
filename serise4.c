#include<stdio.h>
#include<math.h>
int main()
{
    int n, x, i, sum=0;
    printf("X Value:");
    scanf("%d", &x);
    printf("N value: ");
    scanf("%d", &n);
    for(i=0; i<=n; i++)
    {
        sum+=pow(x, i);
    }
    printf("%d", sum);
    return 0;
}
