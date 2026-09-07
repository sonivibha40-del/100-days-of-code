//Write a program to find and display the sum of the first n natural numbers.
#include<stdio.h>
int main(){
   int n,sum;
   printf("Enter no.: ");
   scanf("%d",&n);
   sum=0;
   for (int i=1;i<=n;i++){
      sum=sum+i;
   }
   printf("Sum of n numbers: %d\n",sum);
   return 0;
}
