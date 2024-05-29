
#include <stdio.h>

int main()
{
    int num, r, sum=0;
    scanf("%d", &num);
    for(num; num!=0; num=num/10)
    {
        r=num%10;
        sum=sum*10+r;

    }
    printf("%d ", sum);
    return 0;
}
