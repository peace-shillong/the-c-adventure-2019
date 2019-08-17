//WAP to find Factorial  of a number
#include <stdio.h>
#include <conio.h>
void main()
{
  int i, n;
  clrscr();
  long fact = 1;

  printf("\n Enter the number: \n");
  scanf("%d", &n);

  for (i = 1; i <= n; i++)
   {
     fact = fact * i;
   }

  printf("\nFactorial of %d = %d\n", n, fact);

  getch();
}
