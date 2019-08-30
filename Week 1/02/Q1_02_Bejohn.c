/*
	Q1. Write a program that determine if a number entered by the user at run time is an Armstrong number or not.
*/

#include<stdio.h>
#include<conio.h>
	void main()
  {
  int n,arm=0,rem,n1;
  clrscr();
  printf("Enter any number");
  scanf("%d",&n);
  n1=n;
  while(n>0)
  {
  rem=n%10;
  arm=arm+rem*rem*rem;
  n=n/10;
  }
  if(arm==n1)
  printf("Armstrong");
  else
  printf("Not Armstrong");
  getch();
  }
