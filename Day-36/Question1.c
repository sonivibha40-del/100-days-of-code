//Read and print a matrix.
#include <stdio.h>
void readMatrix(int *arr, int r, int c){
    printf("Enter matrix elements:\n");
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            scanf("%d", (arr + i * c + j));
        }
    }
}
void printMatrix(int *arr, int r, int c){
    printf("Matrix is:\n");
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            printf("%d ", *(arr + i * c + j));
        }
        printf("\n");
    }
}
int main(){
    int arr[10][10], r, c;
    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);
    readMatrix(&arr[0][0], r, c);
    printMatrix(&arr[0][0], r, c);
    return 0;
}

