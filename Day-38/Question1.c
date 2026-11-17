// Add two matrices.
#include <stdio.h>
int main(){
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c], b[r][c], sum[r][c];
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            scanf("%d", &a[i][j]);
        }
    }
    int r2, c2;
    scanf("%d %d", &r2, &c2);
    for (int i = 0; i < r2; i++){
        for (int j = 0; j < c2; j++){
            scanf("%d", &b[i][j]);
        }
    }
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
