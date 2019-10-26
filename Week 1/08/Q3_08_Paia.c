/* Write a program to generate Fibonacci series and
print their sum and average.*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int sum=0,first=0,second=1,fibo,lterm;
	clrscr();
	float avg=0;
	printf("Enter the last term for the Fibonacci series : ");
	scanf("%d",&lterm);
	if(lterm==0)
	{
		printf("\n Fibonacci Series : -");
		printf("\n Sum : %d",sum);
		printf("\n Average : %f",avg);
	}
	else if(lterm==1)
	{
		sum = first;
		avg = sum/lterm;
		printf("\n Fibonacci Series : %d",first);
		printf("\n Sum : %d",sum);
		printf("\n Average : %f",avg);
	}
	else if(lterm==2)
	{
		sum = first + second;
		avg = sum/lterm;
		printf("\n Fibonacci Series : %d %d",first,second);
		printf("\n Sum : %d",sum);
		printf("\n Average : %f",avg);
	}
	else
	{
		sum = first + second;
		printf("\n Fibonacci Series : %d %d",first,second);
		for(int i=0;i<(lterm-2);i++)
		{
			fibo = first + second;
			first = second;
			second = fibo;
			printf(" %d",fibo);
			sum = sum + fibo;
		}
		avg = sum / lterm;
		printf("\n Sum : %d",sum);
		printf("\n Average : %f",avg);
	}
	getch();
}
