//Q7. Write a program to add two numbers, using user defined function add.

#include<stdio.h>
void main()
{
	int a,b,s;
	s=0;
	printf("Enter the 1st number : ");
	scanf("%d",&a);
	printf("\nEnter the 2nd number : ");
	scanf("%d",&b);

	s=add(a,b);

	printf("Sum = %d",s);
}
		int add(int x,int y){
	int sum;
	sum=x+y;
	return sum;
}
