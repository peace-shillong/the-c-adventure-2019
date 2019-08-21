/*Q10. WAP to check whether a number is prime or not.*/

#include<stdio.h>

#include<conio.h>

void main()

{
	
int num,i,count=0;
	
printf("Enter a number:");
	
scanf("%d",&num);
	
for(i=2;i<num;i++)
	
{
		
if(num%i==0)
		
{
			
count++;
			
break;
		
}
	
}
	
if(count==0)
	
{
		
printf("Prime Number");
	
}
	
else
	
{
		
printf("Not a Prime Number");
	
}
	
getch();

}
