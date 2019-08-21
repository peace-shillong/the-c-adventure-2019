/* Write a program to input a positive number and reverse the digits of the number.

Algorithm : Request for input, Check if the number is positive then
reverse digits, otherwise, Request for input again.
*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int num,rev=0,temp;
	do
	{
		clrscr();
		printf("\n Please enter a number : ");
		scanf("%d",&num);
		if(num<=0)
		{
			printf("\n !!! Please, enter a positive number !!!");
			getch();
		}
	}while(num<=0);
	temp=num;
	while(temp>0)
	{
		rev = (rev * 10) + (temp % 10);
		temp = temp / 10;
	}
	printf("\n The reverse of %d = %d",num,rev);
	getch();
}
