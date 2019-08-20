//WAP to find HCF and LCM.
#include <stdio.h>
#include <conio.h>

void main() {
  int a, b, c, d, temp, hcf, lcm;

  printf("Enter the first number\n");
  scanf("%d", &c);
printf("Enter the second number\n");
  scanf("%d", &d);
  
  a=c;
  b=d;

  while(b!=0)
  {

      temp=b;
      b=a%b;
      a=temp;
  }
hcf=a;
lcm=(c*d)/hcf;
printf("HCF = %d", hcf);
printf("\nLCM = %d", lcm);
getch();



}
