#include<stdio.h>
int main()
{
    int invest, selling, amount;
    printf("Invest Price: ");
    scanf("%d", &invest);
    printf("Selling Price: ");
    scanf("%d", &selling);
    if(invest<selling)
    {
        amount=selling-invest;
        printf("Profit: %d Taka", amount);
    }
    else if(selling<invest)
    {
        amount=invest-selling;
        printf("Loss: %d Taka", amount);
    }
    else
        printf("Nothing");
    return 0;
}
