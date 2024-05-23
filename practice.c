#include<stdio.h>
#include<math.h>
int main()
{
  int a = 7;
  a=abs (~++a - a++);
  printf ("%d\n%d", a>>2, a^3);
  return 0;
}
