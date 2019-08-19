//Q3. Write a program to generate Fibonacci series and print their sum and average.

#include<stdio.h>
#include<conio.h>
int main()
{
	int n,temp,a,b,i,sum,j;
	float avg;
	sum=0,avg=0;
	a=0,b=1;
	printf("Enter the number of terms : ");
	scanf("%d",&n);
	if(n<=0)
	{
		printf("ENTER VALID NUMBER OF TERMS");
		return 0;
	}
	else {
	if(n==1){
		printf("%d" ,a);
		sum=a;
		avg=a;
	}
	else if(n==2)
	{
		printf("%d , %d ",a,b);
		sum=a+b;
		avg=(double)sum/2;
	}
	else	{
			printf("%d , %d ",a,b);
			for(j=2;j<n;j++)
			{
				sum=a+b;
				i=a+b;
				a=b;
				b=i;
				printf(", %d",i);
				sum=sum+i;
			}
			avg=(double)sum/n;
		}
	}
			printf(" sum = %d",sum);
			printf(" average = %.2f",avg);
		
	return 0;
	getch();
}
