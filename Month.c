#include<stdio.h>
int main()
{
    int y,m;
    printf("Enter year: ");
    scanf("%d", &y);
    printf("Enter a Month: ");
    scanf("%d", &m);
    if(m==1 || m==3 || m==5 || m==7 || m==9 || m==11 && y>1)
        printf("%d Month is 31 Days", m);
    else if
            (y>1 && m==4 || m==6 || m==8 || m==10 || m==12)
                printf("%d Month is 30 Days", m);
    else if
            (y>1 && m>=13)
                printf("Error Month");
    else if
            (m==2 && y%4==0 && y%100!=0 || y%400==0)
                printf("%d Month is 29 Days", m);
    else
        printf("%d Month is 28 Days", m);

    return 0;
}
