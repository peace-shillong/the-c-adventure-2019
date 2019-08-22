//program to input a positive number and reverse the digits of the number
Algorithm
1. Start
2. initialize the variables(int num, rem, sum=0)
3. Enter the number
4. Find mod of the entered number
5. Multiply the sum by 10 and add the remainder and store it sum
6. Display
7. Stop

#include<stdio.h>
#include<conio.h>
int main()
{
   int num, rem,sum=0;
   printf("\n Enter the number:");
   scanf("%d",&num);
   while(num>0)
   {
      rem=num%10;
      sum=sum*10+rem;
      num=num/10;
   }
   printf("\n The reverse of %d is: %d",num, sum);
   
}
