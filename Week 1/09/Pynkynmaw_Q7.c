/*WAP to add two numbers , using user defined function add */
#include <stdio.h>
#include <conio.h>
void main()
{
    int a,b;
    clrscr();
    printf("Enter the numbers:");
    scanf("%d%d", &a, &b);
    sum(a,b);
    getch();

}
sum(int x, int y)
{
    int z;
    z=x+y;
    printf("The sum of the two numbers is %d", z);
    return 0;
}
