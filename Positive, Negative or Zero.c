#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    (n<0)?printf("%d is Negative",n):(n==0)?printf("%d is Zero",n):printf("%d is Positive",n);
    return 0;
}
