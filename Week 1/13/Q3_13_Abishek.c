// Q3. Write a program to generate Fibonacci series and print their sum and average.

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
  int i, a, b, c, n, sum;
  double avg;
  a=0;
  b=1;
  sum=0;
  printf("Enter the number of terms: ");
  scanf("%d", &n);
  if(n<=0)
  {
  	printf("Enter the valid number of terms.");
  	exit(0);
	  }  
	  else
  	{
  		printf("The series is given below:\n");
  		if(n==1)
  		{
  			printf("%d", a);
  			sum=a;
  			avg=a;
  		}
  			else if(n==2)
  			{
  				printf("%d\t", a);
  				printf("%d", b);
  				sum=a+b;
  				avg=(double)(a+b)/2;
  			}
  			else
  			{
  				printf("%d\t", a);
  				printf("%d\t", b);
  				sum=a+b;
  				for(i=2; i<n;i++)
  				{
  					c=a+b;
  					a=b;
  					b=c;
  					printf("%d\t", c);
  					sum=sum+c;
  				}
  				avg=(double)sum/n;
				  }
			
			  }
			  printf("\nThe sum of the series is: %d", sum);
  			printf("\nThe average of the series is: %.2lf", avg);
  			
  return 0;
  getch();
}
