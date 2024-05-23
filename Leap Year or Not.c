#include<stdio.h>
int main()
{
    int y;
    scanf("%d", &y);
    (y%4==0)?printf("%d is Leap Year", y):printf("%d in not Leap Year",y);
    return 0;
}
