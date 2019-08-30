/* Q8. WAP to find Factorial  of a number [use for loop]. */
#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,fact=1;
clrscr();
printf("Enter any number:");
sacnf(%d",&n);
for(i=1;i<=n;i++)
{
fact=fact*i;
}
printf("The factor of %d is %d",n,fact);
getch();
}
