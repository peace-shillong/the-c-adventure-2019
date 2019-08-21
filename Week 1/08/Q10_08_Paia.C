/* WAP to check whether a number is prime or not. */

#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int num,flag=0;
	printf("\n Enter a number : ");
	scanf("%d",&num);
	for(int i=2;i<num;i++)
		if(num%i==0)
			flag=1;
	if(flag==1)
		printf("\n %d is not a prime number",num);
	else
		printf("\n %d is a prime number",num);	
	getch();
}
