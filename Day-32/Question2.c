//Find the digit that occurs the most times in an integer number.
#include <stdio.h>
int main() {
    long long n, temp;
    int digit, count[10] = {0};
    int i, max = 0, result = 0;
    scanf("%lld", &n);
    temp = n;
    while (temp > 0) {
        digit = temp % 10;
        count[digit]++;
        temp = temp / 10;
    }
    for (i = 0; i < 10; i++) {
        if (count[i] > max) {
            max = count[i];
            result = i;
        }
    }
    printf("%d\n", result);
    return 0;
}
