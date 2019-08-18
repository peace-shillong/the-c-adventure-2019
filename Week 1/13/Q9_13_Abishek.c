// Q9. WAP to find HCF and LCM.
HCF is also known as the greatest common divisor (GCD) or the greatest common factor (GCF).

#include<stdio.h>
#include<conio.h>
int main()
{
	int a, b, c, d, temp, hcf, lcm;
	printf("Enter the first number: ");
	scanf("%d", &a);
	printf("\nEnter the second number: ");
	scanf("%d", &b);
	c=a;
	d=b;
	while(d!=0)
	{
		temp=d;
		d=c%d;
		c=temp;
	}
	hcf=c;
	lcm=(a*b)/hcf;
	printf("The highest common factor of %d and %d is %d", a, b, hcf);
	printf("\nThe least common multiple of %d and %d is %d", a,b, lcm);
	getch();
	return 0;
}
