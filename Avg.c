
#include <stdio.h>
int main()
{
    int a, b, c;
    float avg;
    scanf("%d%d%d", &a, &b, &c);
    avg = (a+b+c)/(float)3;
    printf("Average = %f", avg);
    return 0;
}
