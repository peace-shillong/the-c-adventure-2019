/*
Q2. Write a program to input a positive number and reverse the digits of the number.
*/
/

#include<stdio.h>
#include<conio.h>
void main()
{
 int n,rev=0,rem;
 clrscr();
 printf("\n\t Enter any Number:");
 scanf("%d",&n);
 while(n>0)
 {
 rem=n%10;
 rev=rev*10+rem;
 n=n/10;
 }
 printf("\n\t The reverse is %d",rev);
 getch();
 }
 
