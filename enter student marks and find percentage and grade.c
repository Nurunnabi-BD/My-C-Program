#include<stdio.h>
int main()
{
    int Ph, Ch, M, B, Co;
    float p;
    printf("Input Your Subject Number :");
    scanf("%d%d%d%d%d", &Ph, &Ch, &M, &B, &Co);
    p=(Ph+Ch+M+B+Co)/5;
    printf("Percentage = %.2f\n", p);
    if(p>=90 && p<=100)
        printf("Grade A");
    else if(p>=80)
        printf("Grade B");
    else if(p>=70)
        printf("Grade C");
    else if(p>=60)
        printf("Grade D");
    else if(p>=40)
        printf("Grade E");
    else if(p<40)
        printf("Grade F");
    else
    printf("Error");
    return 0;
}
