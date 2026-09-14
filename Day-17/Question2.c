//Write a program to check if a number is prime.
#include <stdio.h>
int main() {
    int n, flag = 0;
    printf("Enter no.: ");
    scanf("%d", &n);
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            flag = 1;
            break;
        }
    }
    if (n > 1 && flag == 0)
        printf("No is Prime\n");
    else
        printf("No is not Prime\n");
    return 0;
}
