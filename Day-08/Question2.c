//Write a program to input three numbers and find the largest among them using if–else.
#include<stdio.h>
int main(){
   int a,b,c;
   printf("Enter 1st no.: ");
   scanf("%d",&a);
   printf("Enter 2nd no.: ");
   scanf("%d",&b);
   printf("Enter 3rd no.: ");
   scanf("%d",&c);
   if (a>=b&&a>=c){
     printf("a is the largest no.\n");
   }else if (b>=c&&b>=a){
     printf("b is the largest no.\n");
   }else{
     printf("c is the largest no.\n");
   }
   return 0;
}
