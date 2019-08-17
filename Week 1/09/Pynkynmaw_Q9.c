//WAP to find HCF and LCM.
#include <stdio.h>
#include <conio.h>

void main() {
  int a, b, l, m, t, hcf, lcm;
clrscr();
  printf("Enter the two numbers\n");
  scanf("%d%d", &l, &m);
  a=l;
  b=m;

  while(b!=0)
  {

      t=b;
      b=a%b;
      a=t;
  }
hcf=a;
lcm=(l*m)/hcf;
printf("The Highest common factor = %d", hcf);
printf("The lowest common factor = %d", lcm);
getch();



}
