//Write a program to calculate the area and circumference of a circle given its radius.
#include<stdio.h>
int main(){
  float r;
  printf("Enter radius of the circle: ");
  scanf("%f",&r);
  printf("Area of circle: %f\n",3.14*r*r);
  printf("Perimeter of circle: %f\n",2*3.14*r);
  return 0;
}
