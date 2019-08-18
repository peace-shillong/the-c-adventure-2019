//WAP to find HCF and LCM
#include<stdio.h>
void main(){
    int num1, num2, tnum1, tnum2, temp=0, hcf, lcm;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    tnum1 = num1;
    tnum2 = num2;
    while(tnum2!=0){
        temp = tnum2;
        tnum2 = tnum1  % tnum2;
        tnum1 = temp;
    }
    hcf = tnum1;
    lcm = (int)(num1*num2)/hcf;
    printf("HCF = %d.",hcf);
    printf("\nLCM = %d.",lcm);
}