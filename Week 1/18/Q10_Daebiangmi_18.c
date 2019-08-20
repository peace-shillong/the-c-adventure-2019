//WAP to check whether a number is prime or not.
#include <stdio.h>
#include <conio.h>

void main()
{
   int i, n, pr = 0;
  
   printf("Enter a number: \n");
   scanf("%d", &n);
   for(i=1; i<=n; i++)
   {
      if(n%i==0)
      {
         pr++;
      }
   }
   if(pr==2)
   {
      printf("%d is a prime number.",n);
   }
   else
   {
      printf("%d is not a prime number.",n);
   }
   getch();
}
