//Q9. Write a program to find HCF and LCM.

#include<stdio.h>
void main()
{
	int a,b,x,y,hcf,lcm,temp;
	temp=0;
	printf("Enter the first number : ");
	scanf("%d",&a);
	printf("Enter the second number : ");
	scanf("%d",&b);
	x=a,y=b;
	while(b!=0){
		temp=b;
		b=a%b;
		a=temp;
	}
	hcf=a;
	lcm=(x*y)/hcf;
	printf("HCF = %d",hcf);
	printf("\nLCM = %d",lcm);
}
