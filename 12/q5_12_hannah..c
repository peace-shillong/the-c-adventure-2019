/*WAP to input the roll no., marks in 3 subjects and marks in one additional subject for N numbers of students. 
Compute the total marks, excess additional marks should be added to the total marks and determine the division. 
No division should be given if fail in 1 or more subjects*/
#include<stdio.h>
void main(){
	int n, rollno[30], sub1[30], sub2[30], sub3[30], aSub[30], total=0;
	float avg=0.0;
	printf("Enter the number of students: ");
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		printf("\nEnter the roll number: ");
		scanf("%d", &rollno[i]);
		printf("Enter the marks for:\n");
		printf("Subject 1: ");
		scanf("%d", &sub1[i]);
		printf("Subject 2: ");
		scanf("%d", &sub2[i]);
		printf("Subject 3: ");
		scanf("%d", &sub3[i]);
		printf("Additional Subject: ");
		scanf("%d", &aSub[i]);
	}
	for(int i=0; i<n; i++){
		total = sub1[i] + sub2[i] + sub3[i] + aSub[i];
		avg = (float)total/4;
		printf("\nRoll number : %d", rollno[i]);
		printf("\nTotal mark  : %d ", total);
		if(sub1[i]<30 || sub2[i]<30 || sub3[i]<30 || aSub[i]<30)
			printf("\nResult : Fail.\n");
		else if(avg>=60.0)
			printf("\nResult : First division.\n");
		else if(avg>=50.0 && avg<60.0)
			printf("\nResult : Second division.\n");
		else if(avg>=30.0 && avg<50.0)
			printf("\nResult : Third division.\n");
		else
			printf("\nResult : Fail.\n");
	}
}