/* Write a program that determine if a number entered by the user at run time is an Armstrong number or not.*/

#include<stdio.h>
#include<conio.h>
void main()
{
   int n,temp,sum=0,rem;
   clrscr();
   printf("\nEnter a number:");
   scanf("%d",&n);

   temp = n;

   while (n != 0)
   {
      rem = n % 10;
      sum = sum + (rem*rem*rem);
      n = n / 10;
   }


   if(temp == sum)
      printf("\n%d is an Armstrong Number",temp);
   else
      printf("\n%d is not an Armstrong Number",temp);
  getch();

}
