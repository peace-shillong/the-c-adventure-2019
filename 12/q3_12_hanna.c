//WAP to generate fibonacci series and print their sum and average
#include<stdio.h>
void main(){
	int range, t1=0, t2=1, nxt=0, sum=0;
	float avg=0.0; 
	printf("Enter a range:");
	scanf("%d", &range);
	printf("The fibonacci series is:\n");
	for(int i=0; i<range; i++){
		t1 = t2;
		t2 = nxt;
		nxt = t1 + t2;
		sum = sum + nxt;
		printf("%d\t", nxt );
	}
	avg = (float)sum / range;
	printf("\nSum: %d", sum);
	printf("\nAverage: %.2f", avg);
}
