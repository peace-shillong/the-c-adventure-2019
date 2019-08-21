
/* Q4. Write a program to generate all the prime numbers till N. */

#include<stdio.h>

#include<conio.h>

void main()

{
    
int n,i,num,j;
 
clrscr();
printf("Enter the max range:");
    
scanf("%d",&n);
    
printf("Prime Numbers are: \n");
    
for(i=1; i<=n; i++)
    
{
        
num=0;
        
for(j=1; j<=n; j++)
        
{
            
if(i%j==0)
                
num++;
        
}
        
if(num==2)
            
printf("%d " ,i);
    
}
    
getch();

}
