/* Q5. Write a program to input the roll no., marks in 3 subjects and marks in one additional subject for N number of students.
Compute the total marks, excess additional marks should be added to the total marks and determine the division.
No division should be given if fail in 1 or more subjects.
*/

#include<stdio.h>
#include<conio.h>
int main()
{
	int roll_no[50], n, i;
	float sub1[50], sub2[50], sub3[50], add[50];
	float total, division;
	
	printf("Enter the number of students: ");
	scanf("%d", &n);
	
	printf("Enter the details:\n");
	for(i=0;i<n;i++)
	{
		printf("\nRoll No: ");
		scanf("%d", &roll_no[i]);
		printf("Marks secured in Subject 1: ");
		scanf("%f", &sub1[i]);
		printf("Marks secured in Subject 2: ");
		scanf("%f", &sub2[i]);
		printf("Marks secured in Subject 3: ");
		scanf("%f", &sub3[i]);
		printf("Marks secured in Additional Subject: ");
		scanf("%f", &add[i]);
	}
	
	printf("\n\nSTUDENT DETAILS: ");
	for(i=0;i<n;i++)
	{
		total=0;
		division=0;
		total= sub1[i]+sub2[i]+sub3[i]+add[i];
		division=total/4;
		printf("\n\nRoll No: %d", roll_no[i]);
		printf("\nTotal Marks: %.2f", total);
		printf("\nPercentage: %.2f", division);
		
		if((sub1[i]<35 || sub2[i]<35 || sub3[i]<35 || add[i]<35) && division>35)
			printf("\nDivison: No Division");
		else if(division>=60)
			printf("\nDivision: First Division");
		else if(division<60 && division>=45)
			printf("\nDivision: Second Division");
		else if(division>=35 && division<45)
			printf("\nDivision: Third Division");
		else
			printf("\nDivision: Fail");
	}
	getch();
	return 0;
}
