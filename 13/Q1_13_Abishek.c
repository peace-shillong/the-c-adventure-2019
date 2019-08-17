/*Q1. Write a program that determine if a number entered by the user at run time is an Armstrong number or not.

//Algorithm:
1) Start
2) Declare variables n, temp, sum, r
3) Read variable n and initialize sum to 0
4) Set temp = n
5) While n>0, performs steps 6 through 8
6) Set r = n % 10
7) Set sum = sum + r * r * r
8) Set n = n / 10
9) If temp = sum
    Display temp is an Armstrong Number
  Else
    Display temp is not an Armstrong Number
10) Stop
*/

#include<stdio.h>
#include<conio.h>
void main()
{
  int n, temp, sum, r;
  sum = 0;
  printf("Enter a number:");
  scanf("%d", &n);
  temp=n;
  while(n>0)
  {
    r = n % 10;
    sum = sum + r * r * r;
    n = n / 10;
  }
  if(temp == sum)
    printf("%d is an Armstrong Number.", temp);
  else
    printf("%d is not an Armstrong Number.", temp);
   getch();
}
