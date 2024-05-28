#include<stdio.h>
int main()
{
    int num;
    printf("Enter a Number : ");
    scanf("%d", &num);
    switch(num>0)
    {
    case 1:
        printf("The Number is Positive");
        break;
    case 0:
        switch(num<0)
        {
        case 1:
            printf("The Number is Negative");
            break;
        case 0:
            printf("The Number is Zero");
            break;
        }
    break;
    }
    return 0;
}
