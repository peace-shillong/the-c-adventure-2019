/*WAP to add two numbers , using user defined function add */
#include <stdio.h>
#include <conio.h>
void main()
{
    int a,b,c ;
    c=0;
   
    printf("Enter the first number:");
    scanf("%d", &a);
    
	printf("Enter the 2nd number:");
    scanf("%d", &b);
    
    c=sum(a,b);
    getch();

}
sum(int x, int y)
{
    int z;
    z=x+y;
    printf("The sum of the two numbers is %d", z);
    return 0;
}
