#include <stdio.h>
int add();
void main()
{
    int a,b,result;
    printf("enter two numbers \n");
    scanf("%d %d",&a ,&b);
    result = add(a,b);
    printf("sum of two digits are:", a,b,result);


}
int add( int a , int b)
{
    int c = a+b;
    printf("%d",c);
}
