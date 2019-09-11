#include<stdio.h>
#include<conio.h>
int main()
{
   int a,b,x,y,temp,hcf,lcm;
   printf("Enter two number:");
   scanf("%d%d",&x,&y);
   a=x;
   b=y;
   while(b!=0)
   {
      temp=b;
      b=a%b;
      a=temp;
   }
   hcf=a;
   lcm=(x*y)/hcf;
   printf("HCF=%d\n",hcf);
   printf("LCM=%d\n",lcm)
   return 0;
}
