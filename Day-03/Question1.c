//Write a program to convert temperature from Celsius to Fahrenheit.
#include<stdio.h>
int main(){
   float temp;
   printf("Enter your temp: ");
   scanf("%f",&temp);
   printf("Celsius to Fahrenheit: %f\n",(temp*1.8)+32);
   return 0;
}
