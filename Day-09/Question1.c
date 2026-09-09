//Write a program to find the roots of a quadratic equation and categorize them.
#include<stdio.h>
#include<math.h>
int main(){
   int a,b,c,discriminant,root1,root2;
   printf("Enter the no.: ");
   scanf("%d",&a);
   printf("Enter the no.: ");
   scanf("%d",&b);
   printf("Enter the no.: ");
   scanf("%d",&c);
   discriminant=b*b-4*a*c;
   if (discriminant > 0) {
    printf("Two distinct real roots\n");
    printf("%d\n",root1 = (-b + sqrt(discriminant)) / (2*a));
    printf("%d\n",root2 = (-b - sqrt(discriminant)) / (2*a));
   }else if (discriminant == 0) {
    printf("Two equal real roots\n");
    printf("%d\n",root1 = root2 = -b / (2*a));
   }else {
    printf("Roots are imaginary\n");
   }
   return 0;
}
