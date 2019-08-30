/*Q8. WAP to find Factorial  of a number [use for loop].
1. take input from the user.
2. use loop to generate the factorial.
*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int i, n, fact=1;
    printf("Enter a number to find it's factorial:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("The factorial of %d is %d", n, fact);
    getch();
    return 0;
}