#include <stdio.h>

int main()
{
    int amount;
    int note1000, note500, note200, note100, note50, note20, note10, note5, note2, note1;
    note1000=note500=note200=note100=note50=note20=note10=note5=note2=note1=0;
    printf("Enter amount: ");
    scanf("%d", &amount);
    if(amount>=1000)
    {
        note1000=amount/1000;
        amount=amount-(note1000*1000);
    }
    if(amount>=500)
    {
        note500=amount/500;
        amount=amount-(note500*500);
    }
    if(amount>=200)
    {
        note200=amount/200;
        amount=amount-(note200*200);
    }
    if(amount>=100)
    {
        note100=amount/100;
        amount=amount-(note100*100);
    }
    if(amount>=50)
    {
        note50=amount/50;
        amount=amount-(note50*50);
    }
    if(amount>=20)
    {
        note20=amount/20;
        amount=amount-(note20*20);
    }
    if(amount>=10)
    {
        note10=amount/10;
        amount=amount-(note10*10);
    }
    if(amount>=5)
    {
        note5=amount/5;
        amount=amount-(note5*5);
    }
    if(amount>=2)
    {
        note2=amount/2;
        amount=amount-(note2*2);
    }
    if(amount>=1)
    {
        note1=amount;
    }
    printf("1000Note= %d\n", note1000);
    printf("500Note= %d\n", note500);
    printf("200Note= %d\n", note200);
    printf("100Note= %d\n", note100);
    printf("50Note= %d\n", note50);
    printf("20Note= %d\n", note20);
    printf("10Note= %d\n", note10);
    printf("5Note= %d\n", note5);
    printf("2Note= %d\n", note2);
    printf("1Note= %d\n", note1);

    return 0;
}

