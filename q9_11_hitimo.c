/*Q9. WAP to find HCF and LCM.
HCF is also known as the greatest common divisor (GCD) or the greatest common factor (GCF)
HCF means the highest common factor of a given set of numbers
LCF means the lowest common factor of a given set of numbers

*/
#include<stdio.h>
#include<conio.h>

int main() 
{
    int a, b, x, y, t, gcd, lcm;

    printf("Enter two integers\n");
    scanf("%d%d", &x, &y);
    
    a = x;
    b = y;
    while (b != 0) 
    {
        t = b;
        b = a % b;
        a = t;
    }
    gcd = a;
    lcm = (x*y)/gcd;
    printf("Greatest common divisor of %d and %d = %d\n", x, y, gcd);
    printf("Least common multiple of %d and %d = %d\n", x, y, lcm);
    
    getch();
    return 0;
}