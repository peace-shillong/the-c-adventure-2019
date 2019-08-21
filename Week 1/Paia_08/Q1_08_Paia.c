/* Write a program that determine if a number entered by the user
at run time is an Armstrong number or not.*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int num,sum,armst=0,temp;
	clrscr();
	printf("Enter a number : ");
	scanf("%d",&num);
	temp = num;
	while(temp>0)
	{
		sum = 0;
		sum = sum + (temp % 10);
		temp = temp / 10;
		armst = armst + (sum * sum * sum);
	}
	if(armst == num)
		printf("\n %d is an Armstrong number",num);
	else
		printf("\n %d is not an Armstrong number",num);
	getch();
}

