#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if(n>0){
        printf("%d is Positive", n);}
    else if(n==0){
        printf("%d is Zero", n);}

    else{
        printf("%d is Negative", n);
    }
    return 0;
}
