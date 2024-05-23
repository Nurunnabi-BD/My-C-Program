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
       if(i%2==0){
        sum+=pow(x,i);
       }
       else{
        sum-=pow(x,i);
       }
    }
    printf("%d", sum);
    return 0;
}
