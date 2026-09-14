//Write a program to find the LCM of two numbers.
#include <stdio.h>
#include <stdio.h>
int main() {
    int a, b, lcm;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    for (int i = 1; i <= a * b; i++) {
        if (i % a == 0 && i % b == 0) {
            lcm = i;
            break;
        }
    }
    printf("LCM = %d\n", lcm);
    return 0;
}
