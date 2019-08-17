//Q1. Write a program that determine if a number entered by the user at run time is an Armstrong number or not.

#include<stdio.h>
void main()
{
	int arm,n,b,num;
	printf("Enter a number : ");
	scanf("%d",&n);
	num=n;
	while(n>0)
	{
		b=n%10;
		arm=arm+b*b*b;
		n=n/10;
	}
	if(arm==num)
		printf("%d is an armstrong number ",num);
	else
		printf("%d is not an armstrong number ",num);

}
