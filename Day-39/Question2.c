//Find the Sum of Main Diagonal Elements of a Square Matrix
#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    int a[r][c];
    int sum = 0;

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < r; i++) {
        sum += a[i][i];
    }

    printf("%d", sum);

    return 0;
}
