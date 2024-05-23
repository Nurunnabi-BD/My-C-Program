#include<stdio.h>
int main()
{
    int amount, note100, note50, note20, note10, note5, note2, note1;
    note100=note50=note20=note10=note5=note2=note1=0;
    scanf("%d", &amount);
    printf("%d\n", amount);
    if(100<=amount)
        note100=amount/100;
        amount-=note100*100;
        printf("%d nota(s) de R$ 100,00\n", note100);
    if(50<=amount)
        note50=amount/50;
        amount-=note50*50;
        printf("%d nota(s) de R$ 50,00\n", note50);
    if(20<=amount)
        note20=amount/20;
        amount-=note20*20;
        printf("%d nota(s) de R$ 20,00\n", note20);
    if(10<=amount)
        note10=amount/10;
        amount-=note10*10;
        printf("%d nota(s) de R$ 10,00\n", note10);
    if(5<=amount)
        note5=amount/5;
        amount-=note5*5;
        printf("%d nota(s) de R$ 5,00\n", note5);
    if(2<=amount)
        note2=amount/2;
        amount-=note2*2;
        printf("%d nota(s) de R$ 2,00\n", note2);
    if(1<=amount)
        note1=amount/1;
        amount-=note1*1;
        printf("%d nota(s) de R$ 1,00\n", note1);
    return 0;
}
