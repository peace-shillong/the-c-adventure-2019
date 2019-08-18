//Q1. Write a program that determine if a number entered by the user at run time is an Armstrong number or not.

#include<stdio.h>
#include<conio.h>
void main()
{
	int a,n,b,num;
	printf("Enter a number : ");
	scanf("%d",&n);
	num=n;
	
		while(n>0)
		{
			b=n%10;
			a=a+b*b*b;
			n=n/10;
	}
		if(a==num)
			printf("%d is an Armstrong Number ",num);
	else
			printf("%d is not an Armstrong Number ",num);
			getch();

}
