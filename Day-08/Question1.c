/*Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet,
 digit, or special character.
*/
#include<stdio.h>
int main(){
   char character;
   printf("Enter character: ");
   scanf("%c",&character);
   if (character>='A'&&character<='Z'){
      printf("Upper case\n");
   }else if (character>='a'&&character<='z'){
      printf("Lower case\n");
   }else if (character>='0'&&character<='9'){
      printf("Digit\n");
   }else{
      printf("Special character\n");
   }
   return 0;
}
