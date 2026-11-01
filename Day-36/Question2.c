//Find the sum of all elements in a matrix.
#include <stdio.h>
int sumMatrix(int *arr, int r, int c){
    int sum = 0;
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            sum += *(arr + i * c + j);
        }
    }
    return sum;
}
int main(){
    int arr[10][10], r, c;
    scanf("%d %d", &r, &c);
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    printf("%d", sumMatrix(&arr[0][0], r, c));
    printf("\n");
    return 0;
}
