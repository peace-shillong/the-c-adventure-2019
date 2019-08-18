//Q4. Write a program to generate all the prime numbers till N

#include<stdio.h>
#include<conio.h>
int main()
{
	int n,t,s,i,j;
	printf("Enter the Number for N : ");
	scanf("%d",&n);
	if(n<0)
	{
		printf("Enter a Valid Number > 0");
		return 0;
	}
	else{
		for(i=1;i<=n;i++){
			s=0;
			for(j=1;j<=n;j++){
				if(i%j==0){
					s=s+1;
				}
			}
			if(s==2){
				printf("%d \t",i);
			}
		}
	}
	return 0;
}
