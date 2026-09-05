//Write a program to swap two numbers using a third variable.
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter your first no.: ");
    scanf("%d",&a);
    printf("Enter your second no.: ");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("your first no.: %d\n",a);
    printf("your second no.: %d\n",b);
    return 0;
}
