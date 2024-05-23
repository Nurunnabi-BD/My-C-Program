#include<stdio.h>
int main()
{
    int N, y, m, d;
    y = m = d = 0;
    scanf("%d", &N);
    if(365<=N)
        y=N/365;
        N-=y*365;
        printf("%d ano(s)\n", y);
    if(30<=N)
        m=N/30;
        N-=m*30;
        printf("%d mes(es)\n", m);
    if(N<30)
        d=N;
        printf("%d dia(s)\n", d);
    return 0;
}
