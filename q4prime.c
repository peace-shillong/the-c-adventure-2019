//WAP to generate all the prime numbers till N
#include<stdio.h>
void main(){
	int range, count =0;
	printf("Enter a range:");
	scanf("%d",&range);
	for(int i=1; i<=range; i++){
		int count =0;
		for(int j=2; j<i; j++){
			if(i%j==0){
				count++;
				break;
			}
		}
		if(count==0)
			printf("%d\t", i);
	}
}