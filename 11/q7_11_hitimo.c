/*Q7. WAP to add two numbers, using user defined function add
1. create a function
2. take input from user.
3. call function 
*/
#include<stdio.h>
#include<conio.h>

int add(int x, int y)
{
    return(x+y);
}

int main()
{
    int a, b;
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);
    printf("the sum is:%d",add(a,b));
    getch();
    return 0;
}