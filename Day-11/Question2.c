//Write a program to find profit or loss percentage given cost price and selling price.
#include<stdio.h>
int main(){
   float sp,cp,profit,percentage,loss;
   printf("Enter cost price.: ");
   scanf("%f",&cp);
   printf("Enter selling price.: ");
   scanf("%f",&sp);
   if (sp > cp) {
    profit = sp - cp;
    percentage = (profit / cp) * 100;
    printf("Profit Percentage = %.2f%%\n", percentage);
   }else if (cp > sp) {
    loss = cp - sp;
    percentage = (loss / cp) * 100;
    printf("Loss Percentage = %.2f%%\n", percentage);
   }else {
    printf("No Profit, No Loss\n");
   }
   return 0;
}
