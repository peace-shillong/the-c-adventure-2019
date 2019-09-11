/*
	Q2. WAP to input a positive number and reverse the digits of the number.
	Algorithm : 
	 1.Start.
	 2.intialize variables (number,reminder,reverse). 
	 3.set reverse=0.
	 4.reminder = number%10.
	 5.reverse = reverse*10+reminder.
	 6.number = number/10.
	 7.repeat step 4-6 until number>0.
	 8.Print the reverse number.
	 9.End.
*/

#include <stdio.h>
#include <conio.h>
void main()
{
	clrscr();
	int number,reminder,reverse=0;
  
	printf("\nEnter a positive number : ");
	scanf("%d",&number);
	
	while(number>0)
	{
		reminder=number%10;
		reverse=reverse*10+reminder;
		number=number/10;
	}
	
	printf("\nThe Reverse is %d",reverse);
	
	getch();
}
