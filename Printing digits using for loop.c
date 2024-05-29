#include <stdio.h>
int main()
{
    int num, r;
    scanf("%d", &num);
    for(num; num!=0; num=num/10)
    {
        r=num%10;
        printf("%d ", r);

    }
    return 0;
}

