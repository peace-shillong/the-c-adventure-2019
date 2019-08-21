/* Write a program to input the roll no., marks in 3 subjects and marks in one additional subject for N number
of students. Compute the total marks, excess additional marks should be added to the total marks and
determine the division. No division should be given if fail in 1 or more subjects. */
#include<stdio.h>
#include<conio.h>
void main()
{
	int nStudents,m1,m2,m3,m4,rollno,total,div;
	clrscr();
	printf("\n Enter the number of students : ");
	scanf("%d",&nStudents);
	if(nStudents<1)
	{
		printf("\n You have entered an invalid number of students");
	}
	else
	{
		for(int i=0;i<nStudents;i++)
		{
			printf("\n Please enter the roll number : ");
			scanf("%d",&rollno);
			printf("\n Please enter the marks for the first subject : ");
			scanf("%d",&m1);
			printf("\n Please enter the marks for the second subject : ");
			scanf("%d",&m2);
			printf("\n Please enter the marks for the third subject : ");
			scanf("%d",&m3);
			printf("\n Please enter the marks for the additional subject : ");
			scanf("%d",&m4);
			total=m1+m2+m3+m4;
			printf("\n\n Total Marks : %d",total);
			if(total>=280 && m1>=40 && m2>=40 && m3>=40 && m4>=40)
				div=1;
			else if(total<280 && total>=200 && m1>=40 && m2>=40 && m3>=40 && m4>=40)
				div=2;
			else if(total<200 && total>=160 && m1>=40 && m2>=40 && m3>=40 && m4>=40)
				div=3;
			else
				div=0;
			if(div==0)
				printf("\n Failed\n");
			else
				printf("\n Division : %d\n",div);

		}
	}
	getch();
}
