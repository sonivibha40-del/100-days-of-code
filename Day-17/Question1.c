//Write a program to check if a number is an Armstrong number.
#include <stdio.h>
#include <math.h>
int main() {
    int n, original, digit, sum = 0, count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    original = n;
    while (n>0){
        count++;
        n = n / 10;
    }
    n = original;
    while (n > 0) {
        digit = n % 10;
        sum = sum + pow(digit, count);
        n = n / 10;
    }
    if (sum == original){
        printf("%d is an Armstrong number.\n", original);
    }else{
        printf("%d is not an Armstrong number.\n", original);
    }
    return 0;
}
