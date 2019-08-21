/*Q1. Write a program that determine if a number entered by the user at run time is an Armstrong number or not
Algorith:
1. Take an input n from the user
2. cube the digits of n and add them together 
    temp=n;
    rem=0, arm=0;
    loop
        rem=n%10;
        arm=arm+(rem^3);
        n=n/10
    end loop
3. if the calculated number i.e arm from above is same as the input given by the user then it is true else false.
*/
#include<stdio.h>
#include<conio.h>

int main()
{
        int n, rem=0, temp=0, arm=0;
        printf("Enter a number to check if it is an armstrong number\n");
        scanf("%d",&n);
        temp=n;
        while(n>0)
        {
            rem=n%10;
            arm=arm+(rem*rem*rem);
            n=n/10;
        }
        if(arm==temp)
        {
            printf("%d is an armstrong number",temp);
        }
        else
        {
            printf("%d is not an armstrong number",temp);
        }
        getch();
        return 0;
}