//Write a program to input the roll no., marks in 3 subjects and marks in one additional subject for N number of students. Compute the total marks, excess additional marks should be added to the total marks and determine the division. No division should be given if fail in 1 or more subjects.
#include<stdio.h>
#include<conio.h>
void main()
{
	int r_no[50],n,i,j;
	float s1[50],s2[50],s3[50],add[50];
	float total,div;
	printf("Enter the number of students : ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter Roll Number : ");
		scanf("%d",&r_no[i]);
		printf("Enter marks :");
		printf("\n S_1 : ");
		scanf("%f",&s1[i]);
		printf("\n S_2 : ");
		scanf("%f",&s2[i]);
		printf("\n S_3 : ");
		scanf("%f",&s3[i]);
		printf("\n Add_subject : ");
		scanf("%f",&add[i]);
	}
	
	printf("\t\nStdudent Details");
	for(i=0;i<n;i++)
	{
		total=0;
		div=0;
		total=s1[i] + s2[i] + s3[i] + add[i];
		div=total/4;
		printf("\nRoll_No: %d\t ", r_no[i]);
		printf("Total Marks: %.2f\t",total);
		printf("Percentage: %.2f\t",div);
		
		if((s1[i]<35 || s2[i]<35 || s3[i]<35 || add[i]<35)&& div>35)
				printf("Div: No Division.",div);
		else if(div>=60)
		
			printf("Div: 1st Division",div);
			
	
		else if(div>=45 && div<60)
	
		
			printf("Div: 2nd Division",div);
			
		
		else if (div>=35 && div<45)
		
		printf("Div: 3rd Division",div);
			
		
		else 
		printf(" Failed!",div);
		
	}

getch();
}
