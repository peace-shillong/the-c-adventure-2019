#include<stdio.h>
#include<math.h>

void main()
{
   int n;
   double sum=0.0;
   printf("Enter the number please : ");
   scanf("%d",&n);
   int store=n;
   int digit,temp;
   while(store>0)
   {
     digit=store%10;
     sum=sum+pow(digit,3);
     store=store/10;
   }
   if(sum==n)
   {
       printf("The number %d is an Armstrong number",n);

   }

   else
   {
       printf("The number %d is not an Armstrong number",n);

   }
   

   
}