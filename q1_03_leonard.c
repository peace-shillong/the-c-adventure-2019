//program that determines if a number entered by the user at run time is an Armstrong number
Algorithm
1. Start
2. Initialize variables(n,r,c,sum=0,temp)
3. Perform mod operarion to get the remainder
4. Cube the remainder and store it in a variable
5. Sum the cube and store it in sum
6. Display
7. End

#include<stdio.h>
#include <conio.h>
Int main()
{
   int num, rem, c, sum=0,temp;
   printf("\n Enter the number:"):
   scanf("%d",&num);
   temp=num;
   while(num>0)
   {
      rem=num%10;
      c= r*r*r;
      sum=sum+c;
      num=num/10;
    }
    num=temp;
    if(num==sum)
    {
       printf("\n The entered number is an Armstrong number");
    }
    else
    {
      Printf("\n The entered number is not an Armstrong number");
    }

}
