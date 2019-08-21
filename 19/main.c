#include <stdio.h>
void main()
{
    int num,fact;
    fact=1;
    printf("enter the number to check for factorial\t");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        fact = fact * i;
        printf("fact  %d:\t", fact);
    }
}
