/* Write a program to generate all prime numbers till N.*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int lterm;
	clrscr();
	printf("\n Enter the last term : ");
	scanf("%d",&lterm);
	if(lterm<=1)
	{
		printf("No terms");
	}
	else
	{
		int flag = 0;
		printf("\n Prime numbers upto %d : 2 ",lterm);
		if(lterm > 2)
		{
			for(int prime=3;prime<=lterm;prime++)
			{
				for(int i=2;i<prime;i++)
				{
					if(prime%i==0)
					{
						flag = 1;
						break;
					}
					else
						flag = 0;
				}
				if(flag==0)
					printf("%d ",prime);
			}
		}
	}
	getch();
}
