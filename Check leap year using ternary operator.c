#include<stdio.h>
int main()
{
    int y;
    printf("Enter a Year : ");
    scanf("%d", &y);
    (y%4==0 && y%100!=0) || (y%400==0)? printf("%d is Leap Year", y): printf("%d is not Leap Year", y);
    return 0;
}
