// Q2. Write a program to input a positive number and reverse the digits of the number.

#include<stdio.h>
#include<conio.h>
int main()
{
  int n, temp, sum, r;
  sum = 0;
  printf("Enter a number:");
  scanf("%d", &n);
  temp=n;
  while(n>0)
  {
    r = n % 10;
    sum = sum * 10 + r;
    n = n / 10;
  }
  printf("The reverse of %d is %d.", temp, sum);
  return 0;
  getch();
}
