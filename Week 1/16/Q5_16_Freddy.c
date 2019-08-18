//Q5. Write a program to input the roll no., marks in 3 subjects and marks in one additional subject for N number of students. Compute the total marks, excess additional marks should be added to the total marks and determine the division. No division should be given if fail in 1 or more subjects.

#include<stdio.h>
int main()
{
	int roll[50],n,i,j;
	float sub1[50],sub2[50],sub3[50],other[50],total,div;
	printf("Enter the number of students : ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter Roll Number : ");
		scanf("%d",&roll[i]);
		printf("Enter marks in :");
		printf("\n Subject 1 : ");
		scanf("%f",&sub1[i]);
		printf("\n Subject 2 : ");
		scanf("%f",&sub2[i]);
		printf("\n Subject 3 : ");
		scanf("%f",&sub3[i]);
		printf("\n Additional : ");
		scanf("%f",&other[i]);
	}
	for(i=0;i<n;i++){
		total=0,div=0;
		total=sub1[i]+sub2[i]+sub3[i]+oth[i];
		div=total/4;
		printf("\n Roll NO. %d \t",roll[i]);
		printf("Total Marks = %.2f \t",total);
		if((sub1[i]<35 || sub2[i]<35 || sub3[i]<35 || other[i]<35)&& div>35 )
		{
			printf("%.2f - pass No division",div);
		}
		else if(div>=60)
		{
			printf("%.2f - First Division",div);
		}
		else if(div>=45 && div<60){
			printf("%.2f - Second Division",div);
		}
		else if(div>=35 && div<45){
			printf("%.2f - Third Division",div);
		}
		else
			printf("%.2f - Fail",div);

	}
}
