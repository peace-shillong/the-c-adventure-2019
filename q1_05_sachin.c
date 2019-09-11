/*
	Q1. WAP that determine if a number entered by the user at run time is an Armstrong number or not.
	
	Algorithm :	
	 1.Start.
	 2.intialize variables (number,reminder,sum,duplicate). 
	 3.set sum=0 and duplicate=number.
	 4.reminder = number%10.
	 5.sum = sum+(reminder+reminder+reminder).
	 6.number = number/10.
	 7.repeat step 4-6 until number>0.
	 8.if sum=duplicate.
	 9.Print number is an Armstrong.
	 10.else.
	 11.Print number is not an Armstrong.
	 12.End.
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{

	clrscr();  
	int number,reminder,duplicate,sum=0;
	
	printf("\nEnter a number : ");
	scanf("%d",&number);
	
	duplicate=number;
	
	while(number>0)
	{
		reminder=reminder%10;
		sum+=pow(reminder,3);
		number=number/10;
	}
	
	if (sum==duplicate){
		printf("\n %d is an Armstrong number.",duplicate);
	}else{
		printf("\n %d is not an Armstrong number.",duplicate);
	}
  
	getch();
}
