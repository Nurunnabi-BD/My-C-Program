#include<stdio.h>
int main()
{
    int num1, num2;
    printf("Enter Two Number : ");
    scanf("%d%d", &num1, &num2);
    num1 = num1 * num2;
    num2 = num1 / num2;
    num1 = num1 / num2;
    printf("After Swapping Number Num1 = %d, Num2 = %d", num1, num2);
    return 0;
}
