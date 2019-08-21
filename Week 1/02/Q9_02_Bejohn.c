*/Q9. WAP to find HCF and LCM.
HCF is also known as the greatest common divisor (GCD) or the greatest common factor (GCF).*/

#include <stdio.h>
    
#include<conio.h>
     
    
int main() 
    
{
      
int a, b, x, y, c, gcd, lcm;
     
     
printf("Enter two number:\n");
      
scanf("%d%d", &x, &y);
     
      
a = x;
     
b = y;
     
      
while (b != 0) 
      
{
        
c = b;
        
b = a % b;
        
a = c;
      
}
     
      
gcd = a;
      
lcm = (x*y)/gcd;
     
      
printf("GCD of %d and %d = %d\n", x, y, gcd);
      
printf("LCM of %d and %d = %d\n", x, y, lcm);
     
getch();
      
return 0;
    
}
