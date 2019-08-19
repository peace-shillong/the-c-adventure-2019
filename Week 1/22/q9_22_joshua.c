/*WAP to find HCF and LCM.*/

#include <stdio.h>
#include <conio.h>
void main(){
clrscr();
  int num1,num2,gcd,lcm;
  printf("Enter two numbers: ");
  scanf("%d %d",&num1,num2);
  for(int i=1; i<=num1 && i<=num2;i++){
      if(num1%i==0 && num2%i==0)
          gcd=i;
  }
  lcm=(num1*num2)/gcd;
  printf("\nHCF of %d and %d is %d",num1,num2,gcd);
  printf("\nLCM of %d and %d is %d",num1,num2,lcm);
getch();
}
