#include<stdio.h>
#include<conio.h>
int add(int a,int b);
int main()
{
   int n1,n2,res;
   printf("Enter the two number:");
   scanf("%d",&n1,&n2);
   res=sum(n1+n2);
   printf("The sum of %d and %d is %d",n1,n2,res);
   return 0;
   int add(int n1,int n2)
   {
      return n1+n2;
   }
}
