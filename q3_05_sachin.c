/*
	Q3.WAP to generate Fibonacci series and print their sum and average.
	Algorithm : 
	 1.Start.
	 2.initialize variables (range,n1,n2,n3,sum,average,i).
	 3.set n1=0,n2=1,sum=0,average=0.0.
	 4.read range.
	 5.Print n1.
	 6.Print n2.
	 7.sum = sum+n2.
	 8.n3=n1+n2.
	 9.n1=n2.
	 10.n2=n3.
	 11.repeat step 6-10 until i<range.
	 12.avg=(float)sum/i.
	 13.Print sum and average.
	 14.End.
*/

#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int range,n1,n2,n3,sum=0,i;
	float average=0.0;
	
	n1=0,n2=1;
	
	printf("\nEnter the range : ");
	scanf("%d",&range);
	
	printf("\nThe Fibonacci series is : %d",n1);
	
	for(int i=1;i<range;i++)	// i<range because n1 has been printed outside of loop and to get exact number of value of fibonacci series which will be get stored in i and i will help to find average.
	{
		printf(",%d",n2);
		sum+=n2;
		n3=n1+n2;
		n1=n2;
		n2=n3;
	}
	printf(".");
	
	average=(float)sum/i;
	
	printf("\nThe sum is : %d",sum);
	printf("\n The average is : %f",average);
	
	getch();
}
