//Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
#include<stdio.h>
int main(){
   int n;
   printf("Enter no.: ");
   scanf("%d",&n);
   if (n>0){
     printf("Positive no.\n");
   }else if (n<0){
     printf("Negative no.\n");
   }else{
     printf("Zero\n");
   }
   return 0;
}
