//Write a program to calculate simple and compound interest for given principal, rate, and time.
#include<stdio.h>
#include<math.h>
int main(){
   float p,r,t,si,ci,a;
   printf("Enter principal amount: ");
   scanf("%f",&p);
   printf("Enter rate: ");
   scanf("%f",&r);
   printf("Enter time: ");
   scanf("%f",&t);
   printf("Simple interest: %f\n",si=(p*r*t)/100);
   a=p*pow((1+r/100),t);
   printf("Compound interest: %f\n",ci=a-p);
   return 0;
}
