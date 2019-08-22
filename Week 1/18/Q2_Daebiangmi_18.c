// Write a program to input a positive number and reverse the digits of the number.

#include <stdio.h>
#include <conio.h>

void main()
{
  int n, rem, r = 0;
 
  printf("\n Enter a number: \n");
  scanf("%d", & n);

  while (n > 0)
   {
     rem = n % 10;
     r = r *10+ rem;
     n = n /10;
   }

  printf("The reverse of a number is  %d\n", r);

  getch();
}
