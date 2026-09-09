//Write a program to input a character and check whether it is a vowel or consonant using if–else.
#include<stdio.h>
int main(){
   char charater;
   printf("Enter charater: ");
   scanf("%c",&charater);
   if (charater=='a'||charater=='e'||charater=='i'||charater=='o'||charater=='u'||charater=='A'||charater=='E'||charater=='I'||charater=='O'||charater=='U'){
      printf("Vowel\n");
   }else{
      printf("Consonant\n");
   }
   return 0;
}
