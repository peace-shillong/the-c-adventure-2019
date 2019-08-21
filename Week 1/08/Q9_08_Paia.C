/* WAP to find HCF and LCM.*/

#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int hcf=0,lcm=0,num1,num2;
	printf("\n Enter two numbers : ");
	scanf("%d %d",&num1,&num2);
	if(num1==0 || num2==0)
	{
		hcf=0;
		lcm=0;
	}
	else if(num1>num2)
	{
		for(int i=num1;i>0;i--)
		{
			if((num1%i==0) && (num2%i==0))
			{
				hcf=i;
				break;
			}
		}
		lcm=1;
		for(int j=2;j<num1;j++)
		{
			if((num1%j==0) && (num2%j==0))
			{
				lcm=j;
				break;
			}
		}
	}
	else
	{
		for(int i=num2;i>0;i--)
		{
			if((num1%i==0) && (num2%i==0))
			{
				hcf=i;
				break;
			}
		}
		lcm=1;
		for(int j=2;j<num2;j++)
		{
			if((num1%j==0) && (num2%j==0))
			{
				lcm=j;
				break;
			}
		}
	}
	printf("\n HCF of %d & %d : %d",num1,num2,hcf);
	printf("\n LCM of %d & %d : %d",num1,num2,lcm);
	getch();
}
