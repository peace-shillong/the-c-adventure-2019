//Q4. Write a program to generate all the prime numbers till N

#include<stdio.h>
#include<conio.h>
int main()
{
	int n,t,c,i,j;
	printf("Enter the number for N : ");
	scanf("%d",&n);
	if(n<0)
	{
		printf("Enter a valid number > 0");
		return 0;
	}
	else{
		for(i=1;i<=n;i++){
			c=0;
			for(j=1;j<=n;j++){
				if(i%j==0){
					c=c+1;
				}
			}
			if(c==2){
				printf("%d \t",i);
			}
		}
	}
	return 0;
}
