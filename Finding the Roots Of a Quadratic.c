#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, c;
    float equa1, ans1, ans2;
    printf("Enter a, b and c : ");
    scanf("%d%d%d", &a, &b, &c);
    equa1=b*b - 4*a*c;
    if(equa1>0)
    {
        ans1= ( -b + sqrt(equa1))/2*a;
        ans2= (-b - sqrt(equa1))/2*a;
        printf("Roots are real and different\n");
        printf("Roots1= %.2f", ans1);
        printf("Roots2= %.2f", ans2);
    }
    else if(equa1==0)
    {
        ans1=ans2= -b/2*a;
        printf("Roots1 = Roots2= %.2f", ans1);
    }

}
