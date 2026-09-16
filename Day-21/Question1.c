//Write a program to swap the first and last digit of a number.
#include <stdio.h>
int main() {
    int n, first, last, divisor = 1, temp, result;
    printf("Enter number: ");
    scanf("%d", &n);
    temp = n;
    while (temp >= 10) {
        temp /= 10;
        divisor *= 10;
    }
    first = temp;
    last = n % 10;
    result = last * divisor + (n % divisor) - last + first;
    printf("After swapping: %d\n", result);
    return 0;
}
