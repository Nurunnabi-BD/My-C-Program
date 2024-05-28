#include<stdio.h>>
int main()
{
    int y;
    printf("Enter a Year : ");
    scanf("%d", &y);
    switch((y%4==0 && y%100!=0) || (y%400==0))
    {
    case 0:
        printf("%d is Not Leap Year", y);
        break;
    case 1:
        printf("%d is Leap Year", y);
        break;
    }
    return 0;
}
