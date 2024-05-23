#include<stdio.h>
int main()
{
    int Basic, GS;
    printf("Enter Your Basic Salary: ");
    scanf("%d", &Basic);
    if(Basic<= 10000)
        GS=(Basic*0.2)+(Basic*0.8)+Basic;
    else if(Basic>=10001 || Basic<=20000)
        GS= (Basic*2.5)+(Basic*0.9)+Basic;
    else
        GS= (Basic*0.3)+(Basic*9.5)+Basic;
    printf("Gross Salary : %d", GS);
    return 0;
}
