//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include<stdio.h>
int main(){
   int l,b,h;
   printf("Enter value: ");
   scanf("%d",&l);
   printf("Enter value: ");
   scanf("%d",&b);
   printf("Enter value: ");
   scanf("%d",&h);
   if (l==b&&b==h&&h==l){
     printf("Equilateral triangle\n");
   }else if (l==b||b==h||h==l){
     printf("Isosceles triangle\n");
   }else{
     printf("Scalene trianle\n");
   }
   return 0;
}
