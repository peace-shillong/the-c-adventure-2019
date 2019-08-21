/* WAP To calculate the average of n numbers. */

#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int num,sum=0,i,j;
	float avg;
	int arr[10];
	printf("\n Enter the number of terms : ");
	scanf("%d",&num);
	if(num<1)
		printf("\n Invalid number of terms");
	else
	{
		for(i=0;i<num;i++)
		{
			printf("\n Element at [%d] : ",i);
			scanf("%d",&arr[i]);
			sum = sum + arr[i];
		}
		printf("\n Series : ");
		for(j=0;j<num;j++)
			printf(" %d",arr[i]);
		avg = sum / num;
		printf("\n Average of the series : %d",avg);
	}
	getch();
}
