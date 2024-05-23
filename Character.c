#include<stdio.h>
#include<ctype.h>
int main()
{
    char A;
    A= getchar();
    if(isalnum(A))
        printf("%c is Alpabet Or Digit", A);
    else
        printf("Symbol");
    return 0;
}
