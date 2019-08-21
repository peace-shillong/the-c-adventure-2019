/*Q10. WAP to check whether a number is prime or not.
( if you can use efficient logic :thumbsup: )*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int n;
    int i, count=0;
    printf("Enter a number to check if it is prime or not:\n");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==1)
    {
        printf("the number %d IS prime",n);
    }
    else
    {
        printf("the number %d is NOT prime",n);
    }
    getch();
    return 0;
}