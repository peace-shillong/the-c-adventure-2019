/* Write a program to input a positive number and reverse the digits of the number. */

#include <stdio.h>
#include <conio.h>

void main()
{
  int n, rem, rev = 0;

  printf("\nPlease Enter any number to Reverse\n");
  scanf("%d", & n);

  while (n > 0)
   {
     rem = n % 10;
     rev = rev *10+ rem;
     n = n /10;
   }

  printf("The reverse of a number is = %d\n", rev);

  getch();
}
