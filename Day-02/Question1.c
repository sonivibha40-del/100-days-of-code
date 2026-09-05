/*Write a program to calculate the area and perimeter of a rectangle
 given its length and breadth.
*/
#include<stdio.h>
int main(){
   int a,b;
   printf("Enter your first no.: ");
   scanf("%d",&a);
   printf("Enter your second no.: ");
   scanf("%d",&b);
   printf("Area: %d\n",a*b);
   printf("Perimeter: %d\n",2*(a+b));
   return 0;
}

