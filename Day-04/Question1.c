//Write a program to swap two numbers without using a third variable.
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter your first no.: ");
    scanf("%d",&a);
    printf("Enter your second no.: ");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d\n",a);
    printf("%d\n",b);
    return 0;
}
