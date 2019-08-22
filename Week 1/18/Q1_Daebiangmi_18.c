/* Write a program that determine if a number entered by the user at run time is an Armstrong number or not.*/

#include<stdio.h>
#include<conio.h>
void main()
{
   int n,tmp,r,sum=0;

   printf("Enter a number:");
   scanf("%d",&n);

   tmp = n;

   while (n != 0)
     {
      r = n % 10;
      sum = sum + (r*r*r);
      n = n / 10;
     }


   if(tmp == sum)
      printf("\n%d is an Armstrong Number",tmp);
   else
      printf("\n%d is not an Armstrong Number",tmp);
  getch();

}
